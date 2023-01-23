#include<stdio.h>

int Add_them(int n, int lulu[]);

int main()
{
    //int a[]={1,2,3,4,5,6,7,8,9,10};
    int a[100];
    int i,size;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    int summ=Add_them(size,a);
    printf("sum: %d\n",summ);
    return 0;
}
int Add_them(int n, int lulu[])
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=lulu[i];
    }
    return sum;
}
