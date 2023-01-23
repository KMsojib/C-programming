/*
Write a C program to take one positive integer N, the size of an array as input. Then take an integer array of size
N as input. You need to print the values and for every value, you need to print other values than that. See the
samples for more clarification.
Hints: Use nested loop

Sample Input: Sample Output:
5               1 - 2 3 4 5
1 2 3 4 5       2 - 1 3 4 5
                3 - 1 2 4 5
                4 - 1 2 3 5
                5 - 1 2 3 4
*/
#include<stdio.h>
int main()
{
    int N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    int a[N],i,j;

    for(i=1;i<=N;i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("The array is: \n");
    for(i=1;i<=N;i++)
    {
        printf("%d-",a[i]);
        for(j=1;j<=N;j++)
        {
            if(i==j)
            {
                continue;
            }
            printf("%d ",a[j]);
        }
        printf("\n");
    }
    return 0;
}

