/*2. Write a C program to check whether a given number is even or odd. Go to the editor
Test Data : 15
Expected Output :
15 is an odd integer*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of x: ");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("%d is EVEN number",x);
    }
    else
    {
        printf("%d is ODD number",x);
    }
    return 0;
}
