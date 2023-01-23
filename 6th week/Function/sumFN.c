//Write a program in C to find the sum of two numbers using the function
#include<stdio.h>
int get_sum(int x,int y)
{
    return x+y;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int sum=get_sum(a,b);
    printf("%d",sum);
    return 0;
}
