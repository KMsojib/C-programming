#include<stdio.h>

int fact(int a);
int ratio(int x,int y);

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int sum2=ratio(x,y);
    printf("Ratio is :%d\n",sum2);
    return 0;
}
int fact(int a)
{
    int m=1;
    for(int i=1; i<=a; i++)
    {
        m*=i;
    }
    return m;
}
int ratio(int x,int y)
{
    int a=fact(x);
    int b=fact(y);
    if(a>b)
    {
        int sum=a/b;
        return sum;
    }
    else
    {
        int sum=b/a;
        return sum;
    }
}
