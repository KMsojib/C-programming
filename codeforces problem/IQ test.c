#include<stdio.h>
int main()
{
    int arr[100],i,n,j;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int oc=0,ec=0;
    for(i=1;i<=n;i++)
    {
        if(arr[i]%2==0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
    }
    int ans;
    if(ec==1)
    {
        for(i=1;i<=n;i++)
        {
            if(arr[i]%2==0)
            {
                ans=i;
                break;
            }
        }
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            if(arr[i]%2!=0)
            {
                ans=i;
            }
        }
    }
    printf("%d ",ans);
    return 0;
}
