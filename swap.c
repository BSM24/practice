#include <stdio.h>
void swap(int *a,int *b);
int main()
{
    int l = 5,m = 3;
    swap(&l,&m);
    printf("new l: %d. new m: %d\n",l,m);
    return 0;
}
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}