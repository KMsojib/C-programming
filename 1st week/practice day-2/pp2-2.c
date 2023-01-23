/*Write a C program to take three integers as input and show who is bigger.
If they are equal print as it is.See the sample input output for more clarification.
*/
#include<stdio.h>
int main()
{
    int x,y,z;

    printf("Enter the value of x y and z: ");
    scanf("%d %d %d",&x,&y,&z);

    if(x>y && x>z)
    {
        printf("%d is the bigger then %d and %d ",x,y,z);
    }
    else if(y>x && y>z)
    {
        printf("%d is the bigger then %d and %d ",y,x,z);
    }
    else if(z>x && z>y)
    {
        printf("%d is the bigger then %d and %d ",z,x,y);
    }
    else
    {
        printf("%d %d %d they are equal",x,y,z);
    }
    return 0;
}
