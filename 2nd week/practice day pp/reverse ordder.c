//write a c program to take one positive integer N, the size of an array as input. Then take an integer
//array of the size N as input and show output in reverse order.
#include<stdio.h>
int main()
{
    int N,i;
    printf("Enter the size of this array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }

    printf("print Reverse order: ");
    for(i=N-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
