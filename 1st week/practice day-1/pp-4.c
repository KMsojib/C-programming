/*Write a C program to take two positive integers as input and show the summation, subtraction and
multiplication of those two numbers.
Sample Input:5 2
Sample Output: 7 3 10*/
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the two positive number: ");
    scanf("%d %d",&x,&y);

    int sum=x+y;
    int sub=x-y;
    int mul=x*y;

    printf("summation %d",sum);
    printf("\nsubtraction %d",sub);
    printf("\nMultiplication %d",mul);
    return 0;
}

