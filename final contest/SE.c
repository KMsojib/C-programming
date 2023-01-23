#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t,k,i;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        int x,pos=-1;
        scanf("%d",&x);
        for(i=1;i<=n;i++)
        {
            if(a[i]==x){
                pos=i;
                break;
            }
        }
        if(pos==-1)
        {
            printf("Case %d: Not Found\n",k);
        }
        else
        {
            printf("Case %d: %d",k,pos);
        }
        printf("\n");
    }
    return 0;
}
