/*1. Write a C program to accept two integers and check whether they are equal or not. Go to the editor
Test Data : 15 15
Expected Output :
Number1 and Number2 are equal */
#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter the value of x and Y :");
    scanf("%d %d",&x,&y);

    if(x==y)
    {
        printf("%d and %d are equal",x,y);
    }
    else
    {
        printf("%d and %d are not equal",x,y);
    }
    return 0;
}
