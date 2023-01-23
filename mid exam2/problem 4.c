#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d",&n);
    int a[n+1];
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
           printf("%d",i);
        }
        else if(i%2!=0)
        {
            //a[i]=i;
            printf("%d",i);
        }
    }
//    for(i=1;i<=n;i++)
//    {
//
//        if(a[i]%2==0)
//        {
//            printf("%d ",a[i]);
//            continue;
//        }
//        else
//        {
//            printf("%d ",a[i]);
//        }
//    }
    return 0;
}
