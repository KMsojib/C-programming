#include<stdio.h>
void sum (int x,int y);
void sub (int x,int y);
void mul (int x,int y);
void dev (int x,int y);

int main()
{
    char ch;
    ch=getchar();
    int a,b;
    scanf("%d%d",&a,&b);
    if(ch=='+')
        sum(a,b);
    else if(ch=='-')
        sub(a,b);
    else if(ch=='*')
        mul(a,b);
    else
        dev(a,b);

    return 0;
}
void sum(int x,int y)
{
    int sum=x+y;
    printf("Sum=%d",sum);

}
void sub (int x,int y)
{
    int sub=x-y;
    printf("sub: %d\n",sub);
}
void mul (int x,int y)
{
    int mul=x*y;
    printf("mul: %d\n",mul);
}
void dev (int x,int y)
{
    int dev=x/y;
    printf("Dev: %d\n",dev);
}
