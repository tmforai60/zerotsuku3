#include <stdio.h>
#include <time.h> 
#include <stdlib.h>

int sum;
int n =3;
int d[] = {1,10,25};
int dyna[10000]={0}; //要素F(0)=0なのでそれ以外の任意のF(i)がゼロであれば解なしとみなせるが分かりにくいので−１で初期化する
int call_count =0;
extern int change(int);

int main(void){
    printf("sum?" );
    scanf("%d", &sum);
    printf("sum=%d\n",sum);  
  //  memset(dyna, -1, sizeof(dyna));
    int y = change(sum);
    printf("コインの枚数=%d call_count=%d\n",y,call_count);
}

int change(int s){
    dyna[0]=0;
    int offset =0;
    
    for (int i =1; i <= s; i++){
         int min =-1;
         for (int j =0; j <n; j++){
            int offset = i - d[j];
            if(offset>=0){
                int nc = dyna[offset];
                if(nc >=0){
                  if(min ==-1) min = nc;
                  if(nc <min) min = nc;
                }
            }
         }
         if (min !=-1) dyna[i] = min +1;       
   } return dyna[s];
}
