#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
    FILE *fp;
 //   char fname[]="test.txt";
    char fname[]="PayRecord.txt";
    int chr;

    fp=fopen(fname,"r");
    if(fp==NULL){
        printf("%s file not open!\n",fname);
        return -1;
    } else{
        printf("%s file opened!\n",fname);
        while((chr=fgetc(fp))!=EOF){
            putchar(chr);
        }
    }
    fclose(fp);
    
    return 0;
}

