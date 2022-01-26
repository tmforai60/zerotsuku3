#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char *name;
    long num;
    struct node *left, *right;
} ;

typedef struct node NODE;
NODE *root = NULL;
NODE *root2 = NULL;
FILE *fp;
long itemcount = 0;
char strbuf[100];
int intbuf;

// prototypes
void loadtree();
NODE *pbtree(int n);
NODE * add_or_change(NODE *p);
char *my_alloc(int n);
void printtree(NODE *p);
NODE *search(NODE *p);
void savetree();
void writetree(NODE *p);
void copytree();

int main()
{
    char ch;
    NODE *p, *search(), *add_or_change();
    while(1)
    {
        printf(">>");
        scanf("%s", strbuf);
        if (strbuf[0] == '.')
        {
            switch(toupper(strbuf[1])) 
            {
                case 'C': 
                    copytree();
                    printtree(root);
                    break;               
                case 'L': 
                    loadtree();
                    break;
                case 'P': 
                    printf("\n\nContents:\n\n");
                    printtree(root);
                    break;
                case 'Q':
                    exit(0);
                case 'S':
                    savetree();
                    break;
                default:
                    printf("\nWrong command; use L, P, Q, or S\n");
            }
        }
        else
        {
            if (scanf("%ld", &intbuf) == 0)
            {
                ch = getchar();
                if (ch == '?' || ch == '/')
                {
                    p = search(root);
                    if (p == NULL)
                    {
                        printf("Unknown name\n");
                    }
                    else if (ch== '?')
                    {
                        printf("%8ld\n", p->num);
                    }
                    else
                    {
                        p->num = -1L;
                        itemcount--;
                    }
                }
                else
                {
                    printf("A name must be followed by a number, ");
                    printf("a question mark, or a slash \n");
                    while (ch!= '\n')
                    {
                        ch = getchar();
                    }
                }
            }
            else
            {
                root = add_or_change(root);
            }
        }
    }
}

void copytree(NODE *a_old, NODE *a_new)
{
    copynode(root,root2)
}

NODE *copynode()
{
    NODE *p;
    if(a_old==NULL) NULL;
    

}

void loadtree()
{
    char filnam[50];
    if (itemcount)
    {
        printf("Workfile is not empty\n"); return;
    }
    
    printf("File name:"); scanf("%s",filnam);
    fp = fopen(filnam , "r");
    if(fp == NULL)
    {
        printf("Unknown file \n"); return;
    }
    if(fscanf(fp, "%d", &itemcount) == 0)
    {
        printf("File %s dose not begin with an item count\n", filnam);
        return;
    }
    root = pbtree(itemcount);
    fclose(fp);
}

NODE *pbtree(int n)
{
    int nleft, nright;
    NODE *p;
    char *my_alloc();
    if (n == 0) 
        return NULL;
    nleft = n >> 1;
    nright = n - nleft - 1;
    p = (NODE *)my_alloc(sizeof(NODE));
    p->left = pbtree(nleft);
    if (fscanf(fp, "%s %ld", strbuf, & p->num) < 2) {
        printf("Error in input file\n"); return NULL;
    }
    p->name = my_alloc(strlen(strbuf) + 1);
    strcpy(p->name, strbuf);
    p->right = pbtree(nright);
    return p;
}

NODE * add_or_change(NODE *p)
{
    char *my_alloc();
    int indic;
    if (p == NULL) { /* 挿入 */
        p = (NODE *)my_alloc(sizeof(NODE));
        p->name = my_alloc(strlen(strbuf) + 1);
        strcpy(p->name, strbuf);
        p->num = intbuf;
        p->left = p->right = NULL;
        itemcount++;
    } else {
        indic = strcmp(strbuf, p->name);
        if(indic < 0)
            p->left = add_or_change(p->left);
        else if (indic > 0) 
            p->right = add_or_change(p->right);
        else {
            if (p->num == -1L) itemcount++;
            p->num = intbuf;
        }
    }
    return p;
}

char *my_alloc(int n)
{
    char *p;
    p = malloc(n);
    if(p == NULL){
        printf("Not enough memory\n");exit(1);
    }
    return p;
}

void printtree(NODE *p)
{
    if(p != NULL){
        printtree(p->left);
        if(p->num != -1L)
            printf("%-40s %81d\n",p->name,p->num);
        printtree(p->right);
    }
}

NODE *search(NODE *p)
{
    int indic;
    if (p == NULL)
        return NULL;
    indic = strcmp(strbuf, p-> name);
    
    return indic < 0 ? search(p->left):
                indic > 0? search(p->right):
                    p->num == -1 ? NULL : p;
}

void savetree()
{
    char filnam[50];
    printf("File name:"); scanf("%s", filnam);
    fp = fopen(filnam, "w");
    fprintf(fp , "%d\n", itemcount);
    writetree(root);
    fclose(fp);
}

void writetree(NODE *p)
{
    if (p!= NULL) {
        writetree(p->left);
        if(p->num != -1L)
            fprintf(fp, "%s %ld\n", p->name , p->num);
        writetree(p->right);
    }
}
/*
.L 空の作業ファイルに永久ファイルの内容をロードする．
.P 作業ファイルの内容を印字する．
.S 作業ファイルを永久ファイルに保存する．
.Q 停止する．
*/

/*
(base) Practice $ ./211107_5Complete_Binary_Tree
>>hoe 10
>>yusaku 20
>>maru 20
>>gussan 15
>>piko 30
>>.S
File name:aaa.dat
>>.Q
(base) Practice $ ./211107_5Complete_Binary_Tree
>>.L
File name:aaa.dat
>>.P


Contents:

gussan                                                                                                                  15
hoe                                                                                                                     10
maru                                                                                                                    20
piko                                                                                                                    30
yusaku                                                                                                                  20
>>gussan ?
      15
>>maru ?
      20
>>papa ?
Unknown name
>>hoehoe /
Unknown name
>>hoe /
>>.P


Contents:

gussan                                                                                                                  15
maru                                                                                                                    20
piko                                                                                                                    30
yusaku                                                                                                                  20
>>.S
File name:bbb.dat
>>.Q
*/