/*
Write a C program to find the maximum of two numbers using
ternary operators.
*/
#include<Stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int max;
    max=a>b? a:b;
    printf("Maximum=%d\n",max);
    return 0;
}
