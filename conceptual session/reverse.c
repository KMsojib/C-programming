#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);

    int main_array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&main_array[i]);
    }
    int reverse_array[n];
    for(int i=n-1,j=0;i>=0;i--,j++)
    {
        reverse_array[j]=main_array[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",reverse_array[i]);
    }
    return 0;
}
