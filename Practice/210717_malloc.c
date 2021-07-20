#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct BookData_tag {
    char title[64]; //書名
    int price; //価格
    char isbn[32]; //ISBN
    struct BookData_tag *next;
    //メンバnext宣言時にはまだtypedefが完了しておらずBookdata
    //がないので、struct BookData_tagと書く必要あり
} BookData;

BookData *book_data_p;
//構造体BookData 1つ分の領域を確保

int main(void){
    book_data_p=(BookData*)malloc(sizeof(BookData));
    printf("Size is %d bite\n",(int)(sizeof(book_data_p)));
    printf("&book_data_p is %p\n", (void*)&book_data_p);
    return 0;
}