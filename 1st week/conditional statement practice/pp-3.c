/* Write a C program to check whether a given number is positive or negative. Go to the editor
Test Data : 15
Expected Output :
15 is a positive number */
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the any value of x: ");
    scanf("%d",&x);

    if(x>0)
    {
        printf("The value %d is positive",x);
    }
    else if(x<0)
    {
        printf("The value %d is negative");
    }
    else
    {
        printf("this is any kind of special character ");
    }
    return 0;
}
