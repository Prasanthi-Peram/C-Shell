#include "headers.h"

void filecopy(FILE *ifp, FILE *ofp){
    int c;
    //use fgetc/fputc instead of getchar() and putchar() as they do not take inputs
    while((c=fgetc(ifp))!=EOF) fputc(c,ofp);
    printf("\n");
}

void main(int argc, char *argv[]){

    FILE *fp;
    if(argc==1) filecopy(stdin,stdout);
    else{
        while(--argc>0){
            if((fp = fopen(*++argv,"r"))==NULL){
                printf("cat : can't open %s\n",*argv);
                return;
            }else{
                filecopy(fp,stdout);
                fclose(fp);
            }
        }
    }

    return;
}

