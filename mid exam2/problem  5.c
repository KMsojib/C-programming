#include<stdio.h>
int add_three_nums(int a,int b,int c);
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    //add_three_nums(a,b,c);
    printf("%d",add_three_nums(a,b,c));
    return 0;
}
int add_three_nums(int a,int b,int c)
{
    //return c=a+b;
    return a+b+c;
}
