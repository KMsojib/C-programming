/*Write a C program to take two integers as input and show who is bigger.
If they are equal print as it is. See the sample input output for more clarification. */
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of x and y: ");
    scanf("%d %d",&x,&y);

    //condition
    if(x>y)
    {
        printf("The value %d x is bigger",x);
    }
    else if(y>x)
    {
        printf("The value %d y is bigger");
    }
    else
    {
        printf("The value %d and %d is equal",x,y);
    }
    return 0;
}
