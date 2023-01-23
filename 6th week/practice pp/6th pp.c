//Write a C program to take one positive integer N as input and print
//all divisors of N. Implement it using function
#include<stdio.h>

void dev_N(int a);
int main()
{
    int n;
    scanf("%d",&n);
    dev_N(n);
    return 0;
}
void dev_N(int a)
{
    int i;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
            printf("%d ",i);
        else
            continue;
    }
}
