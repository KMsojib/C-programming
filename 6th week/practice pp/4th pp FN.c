#include<stdio.h>
int get_i(int x);
int main()
{
    int n,i;
    scanf("%d",&n);
    get_i(n);
    return 0;
}
int get_i(int x)
{
    int i;
    for(i=2;i<=x;i++)
    {
        if(i%2==0)
            printf("%d ",i);
        else
            continue;
    }
}
