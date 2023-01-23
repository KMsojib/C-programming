#include<stdio.h>
int main()
{
    int first=0,second=1,fib,count=0,n;

    printf("Enter the range of this series: ");
    scanf("%d",&n);
    while(count<n)
    {
        if(count<=1)
        {
            fib=count;
        }
        else
        {
            fib=first+second;
            first=second;
            second=fib;
        }
        printf("%d ",fib);
        count++;
    }
    return 0;
}
