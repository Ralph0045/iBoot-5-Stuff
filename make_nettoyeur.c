/*
* Copyright 2020, @Ralph0045
* gcc make_nettoyeur.c -o make_nettoyeur
*/

#include <stdio.h>
#include <stdlib.h>

#define TARGET_JUMPADDR 0x44000000

int main(int argc, char **argv) {
    FILE* fp = NULL;
    
    if(argc < 3){
        printf("Usage: %s <iboot_dec> <dumped iboot> \n",argv[0]);
        return 0;
    }
    
    void* iboot_orig_buf;
    size_t iboot_orig_len;
    
    // dec iBoot
    
    fp = fopen(argv[1], "rb");
    if(!fp) {
        printf("Error opening %s!\n", argv[1]);
        return -1;
    }
    
    fseek(fp, 0, SEEK_END);
    iboot_orig_len = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    
    iboot_orig_buf = (void*)malloc(iboot_orig_len);
    if(!iboot_orig_buf) {
        printf("Out of memory!\n");
        fclose(fp);
        return -1;
    }
    
    fread(iboot_orig_buf, 1, iboot_orig_len, fp);
    fclose(fp);
    
    // dumped iBoot
    
    void* dumped_iboot_buf;
    size_t dumped_iboot_len;
    
    fp = fopen(argv[2], "rb");
    if(!fp) {
        printf("Error opening %s!\n", argv[2]);
        return -1;
    }
    
    fseek(fp, 0, SEEK_END);
    dumped_iboot_len = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    
    dumped_iboot_buf = (void*)malloc(dumped_iboot_len);
    if(!dumped_iboot_buf) {
        printf("Out of memory!\n");
        fclose(fp);
        return -1;
    }
    
    fread(dumped_iboot_buf, 1, dumped_iboot_len, fp);
    fclose(fp);
    
    if(iboot_orig_len!=dumped_iboot_len) {
        printf("Error: size doesn't match!\n");
        return -1;
    }
    
    FILE *fo;
    fo = fopen("nettoyeur.c", "w");
    
    fprintf(fo, "#include <stdio.h>\n\n");
    fprintf(fo, "#define TARGET_JUMPADDR %p\n\n",(void*)TARGET_JUMPADDR);
    fprintf(fo, "int\nmain (void)\n{\n\n");
    
    for (unsigned i=0;i!=iboot_orig_len;i+=0x4) {
        if(*(uint32_t*)iboot_orig_buf!=*(uint32_t*)dumped_iboot_buf) {
            fprintf(fo, "\t*(unsigned int *)(TARGET_JUMPADDR + 0x%x) = 0x%02X;",i,*(uint32_t*)iboot_orig_buf);
            fprintf(fo, "\n");
        }
        iboot_orig_buf += 0x4;
        dumped_iboot_buf += 0x4;
    }
    
    fprintf(fo, "\n\treturn 0;\n");
    fprintf(fo, "}\n");
    
    printf("Wrote nettoyeur\n");
}
