#include<stdio.h>
int main()
{
    int A[10][10],transpose[10][10],row=3,col=3,i,j;

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<col;i++){
        for(j=0;j<row;j++)
        {
            transpose[j][i]=A[i][j];
        }
        printf("\n");
    }
    printf("The transpose matrix is:\n");
    for(i=0;i<col;i++){
        for(j=0;j<row;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}

