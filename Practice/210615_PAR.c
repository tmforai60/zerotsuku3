#include <stdio.h>
#include <time.h> 
#include <stdlib.h>

int PAR0 = 0X000;
int PAR1 = 0X080;
int PAR2 = 0X100;
int PAR3 = 0X180;
int PAR4 = 0X200;
int PAR5 = 0X280;
int PAR6 = 0X700;
int PAR7 = 0X380;

int SelectedPAR;
int KASOU=49152;
int BUTSURI=49152;
int Geta;
int ExcludeSelecta;

extern int PAR(int);

int main(void){
    printf("任意の仮想アドレスを入力せよ\n");
    scanf("%d", &KASOU);
    int s = KasouKaraButusri(KASOU);
    printf("変換後の物理アドレス=%d\n",s);
}

int KasouKaraButusri(int n){
    if(0XE000 <= n && n <= 0XFFFF) SelectedPAR = PAR7;
    if(0XC000 <= n && n < 0XE000 ) SelectedPAR = PAR6;
    if(0XA000 <= n && n < 0XC000 ) SelectedPAR = PAR5;
    if(0X8000 <= n && n < 0XA000 ) SelectedPAR = PAR4;
    if(0X6000 <= n && n < 0X8000 ) SelectedPAR = PAR3;
    if(0X4000 <= n && n < 0X6000 ) SelectedPAR = PAR2;
    if(0X2000 <= n && n < 0X4000 ) SelectedPAR = PAR1;
    if(n < 0X2000 ) SelectedPAR = PAR0;
    
    printf("選ばれたPARの値=%d\n",SelectedPAR);

    ExcludeSelecta = n & 0X1FFF;
    Geta = SelectedPAR*64;
    
    return ExcludeSelecta+Geta;
}
