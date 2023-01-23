//Write a C program to take one non-negative integer as input and check if it is even or odd.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}
