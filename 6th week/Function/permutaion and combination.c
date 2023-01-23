#include<stdio.h>

int fact(int x);
int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    int perm=fact(n)/fact(n-r);//receive factorial value
    int comb=fact(n)/(fact(n-r)*fact(r));

    printf("nPr: %d\n",perm);
    printf("nCr: %d\n",comb);
    return 0;
}
int fact(int x)//n or r receive by x
{
    int i;
    int ans=1;
    for(i=1;i<=x;i++)//calculate factorial
    {
        ans*=i;
    }
    return ans;//factorial value
}
