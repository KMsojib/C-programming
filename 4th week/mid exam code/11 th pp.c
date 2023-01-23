#include<stdio.h>
int main()
{
    int row,col,sum1=0,sum2=0,f=0,sum3=0,sum4=0;
    scanf("%d %d",&row,&col);
    int a[row][col];
    int i,j;
    if(row==col)
    {
        for( i=0; i<row; i++)
        {
            for( j=0; j<col; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for( i=0; i<row; i++)
        {
            for( j=0; j<col; j++)
            {
                if(i==j)
                {
                    sum1=sum1+a[i][j];
                }
                if(i+j==3-1)
                {
                    sum2=sum2+a[i][j];
                }
            }
        }
        if(sum1!=sum2)
        {
            f=1;
        }
        else
        {
            for( i=0; i<row; i++)
            {
                sum3=0;
                sum4=0;
                for( j=0; j<col; j++)
                {
                    sum3=sum3+a[i][j];
                    sum4=sum4+a[i][j];
                }
                if(sum4!=sum1)
                {
                    f=1;
                }
                else if(sum3!=sum1)
                {
                    f=1;
                }
                else
                {
                    f=0;
                }
            }
        }
        if(f==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
