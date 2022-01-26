#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node {
    char *name;
    long num;
    struct node *left, *right;
};

typedef struct node NODE;
NODE *root = NULL;
FILE *fp;

NODE **Search(Node **pp,int x)
{
	NODE **qq;
	qq = pp:
	while (* qq != NULL && x
		qq = (x く (* qq)― >info

		(tqq)-rinfo)
		( *qq ) -rIeft
	(*qq)->right);
	return qq;
}

int main(int argc, char *argv[]){
    int n;
    //struct node *root;
    fp=fopen("NUM.DAT","r");
    fscanf(fp,"%d",&n);
    root=pbtree(n);
    fclose(fp);

    printf("行きがけ順\n");
    printnode1(root);
    printf("\n通りかけ順\n");
    printnode2(root);
    printf("\n帰りかけ順\n");
    printnode3(root);
    
    return 0;
}

