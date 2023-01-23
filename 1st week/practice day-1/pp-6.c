/*Write a C program to take integer value as input and print that value. There is a twist! The input will contain a %
sign.
Sample Input: Sample Output:
20% 20 */
#include<stdio.h>

int main()
{
    int x;
    printf("Enter the x value :");
    scanf("%d",&x);

    printf("The value of x is %d ",x);
    return 0;
}
