/*Write a program in C to check a given number is even or odd using the function*/
#include<stdio.h>

int Even_or_odd(int x)
{
    if(x%2==0)
        return 1;
    else
        return 0;
}
int main()
{
    int a;
    scanf("%d",&a);
    int res=Even_or_odd(a);
    if(res==1)
    {
        printf("%d is even number\n",a);
    }
    else
    {
        printf("%d is odd number\n",a);
    }
    return 0;
}

