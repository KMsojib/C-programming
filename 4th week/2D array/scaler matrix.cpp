#include<stdio.h>
int main()
{
    int row,col,i,j;
    scanf("%d%d",&row,&col);
    int a[row][col];
    for( i=0;i<row;i++)
    {
        for( j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(row==col)
    {
        int flag=1,x=a[0][0];
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(i==j)
                {
                    if(a[i][j]!=x)
                    {
                        flag=0;
                    }
                    continue;
                }
                if(a[i][j]!=0)
                {
                    flag=0;
                }
            }
        }
        if(flag==1)
        {
            printf("scaler");
        }
        else
        {
            printf("Not scaler");
        }
    }
    else
    {
        printf("Not scaler matrix\n");
    }
    return 0;
}
