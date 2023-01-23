#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d%d",&n,&k);
    if(k<=n)
    {
        for(i=1;i<=n;i+=2)
        {
            printf("%d ",i);
        }
    }
    else if(k>=n)
    {
        for(i=2;i<=n;i+=2)
        {
            printf("%d ",i);
        }
    }
}
