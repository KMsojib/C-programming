#include<stdio.h>
int First_dig(int x);
int Second_dig(int x);
int main()
{
    int n,i;
    scanf("%d",&n);
    int x,First,second,add=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        First=First_dig(x);
        second=Second_dig(x);
        add+=First+second;
    }
    printf("Sum : %d\n",add);
    return 0;
}
int First_dig(int x)
{
    x=x/1000;
    return x;
}
int Second_dig(int x)
{
    x=x%10;
    return x;
}
