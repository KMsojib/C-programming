/*
You have been given an NxM matrix, Now your task is to take two matrix
as input and find the sum of this two matrix.
Sample Input
3 3

1 2 3
4 5 6
7 8 9

1 1 1
3 2 4
2 1 2

Sample Output
2 3 4
7 7 10
9 9 11
*/

#include<stdio.h>
int main()
{
    int row,col,i,j;
    scanf("%d %d",&row,&col);
    int a[row][col],b[row][col],mul[row][col];

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            mul[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}
