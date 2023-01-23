#include<stdio.h>
int main()
{
    int i;
    long long int n,ara[200005];
    scanf("%lld",&n);

    int moves=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&ara[i]);
    }

    for(i=1;i<n;i++)
    {
        if(ara[i]<ara[i-1])
        {
            moves+=ara[i-1]-ara[i];
            ara[i]=ara[i-1];
        }
    }
    printf("%d\n",moves);
    return 0;
}
