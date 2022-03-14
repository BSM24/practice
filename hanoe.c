#include <stdio.h>
#include <stdlib.h>
void TOH(int n,char* A, char* B,char* C);

int main()
{
    int n;
    printf("\n\t enter the number of Rings: ");
    scanf("%d",&n);
    TOH(n,"Red","Blue","Pink");
}

void TOH(int n,char* A, char* B,char* C)
{
    if(n>0)
    {
      TOH(n-1,A,C,B);
      printf("\n\tshift %d from %s to %s\n",n,A,B);
      TOH(n-1,C,B,A);
    }
}