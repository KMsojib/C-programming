#include<stdio.h>

int main()
{
    int i,sum=0,w,n;

    printf("Enter the number of passenger: ");
    scanf("%d",&n);

    i=1;
    while(i<=n)
    {
        printf("passenger %d :",i);
        scanf("%d",&w);
        sum+=w;
        i++;
    }
    printf("Total weight of passenger: %d",sum);
    return 0;
}
