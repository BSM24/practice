#include <stdio.h>
#define MAX_TERMS 101
typedef struct {
    int column;
    int row;
    int value;
}term;
term a[MAX_TERMS];

void transpose();
void swap(int *a,int *b);
int row=0,column=0;
int main()
{
    int row,column,n,b[15][15];
    row = 3;
    column = 3;
    n = 4;
    // printf("\n\t enter the total number of rows: ");
    // scanf("%d",&row);
    // printf("\n\t enter the total number of columns: ");
    // scanf("%d",&column);
    // printf("\n\t enter the total number of non-zero entries: ");
    // scanf("%d",&n);
    int i,a[n+1][n+1];
    a[0][0]=row;
    a[0][1]=column;
    a[0][2]=n;
    a[1][0] = 0;
    a[1][1] = 1;
    a[1][2] = 45;
    a[2][0] = 1;
    a[2][1] = 0;
    a[2][2] = 99;
    a[3][0] = 1;
    a[3][1] = 2;
    a[3][2] = 52;
    a[4][0] = 2;
    a[4][1] = 0;
    a[4][2] = -15;
    
    /*for(i=0;i<n;i++)
    {
        printf("\n\t enter the row: ");
        scanf("%d",&a[i][0]);
        printf("\n\t enter the column: ");
        scanf("%d",&a[i][1]);
        printf("\n\t enter the non-zero entry: ");
        scanf("%d",&a[i][2]);
    }*/
    printf("\n\t matrix information: ");
    for(i=0;i<=n;i++)
    {
        printf("\n\t%d    \t%d    \t%d\n", a[i][0],a[i][1],a[i][2]);
    }
       transpose(a,b);
}



void transpose(term a[], term b[])
{
    for(int i=0;i<=4;i++)
    {
        printf("\n %d \t\t %d \t\t\t %d\n", a[i].row, a[i].column, a[i].value);
    }
    int p=0,currentb;
    b[0].row=a[0].column;
    b[0].column=a[0].row;
    b[0].value=p;
    
    if(p>0)
    {
        currentb=1;
        for(int i=0;i<a[0].column; i++)
        {
            for(int j=1;j<=p;j++)
            {
                if(a[j].column == i)
                {
                    b[currentb].row = a[j].column;
                    b[currentb].column = a[j].row;
                    b[currentb].value = a[j].value;
                    currentb++;
                    printf("\n %d \t\t %d \t\t\t %d\n", a[i].row, a[i].column, a[i].value);
                }
            }
        }
    }
    //printf("row: %d\tcolumn: %d\n",a[0].row,a[0].column);
    printf("\n\t after transpose: ");
    printf("\n row \t\t column \t\t value\n");
    // printf("\n %d \t\t %d \t\t %d\n", a[i].row, a[i].column, a[i].value);
    // for(int i=0;i<a[0].column; i++)
    //     {
    //         for(int j=0;j<a[0].row;j++)
    //         {
    //             printf("\n %d \t\t %d \t\t\t %d\n", a[i].row, a[i].column, a[i].value);
    //         }
    //     }
    
    
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
