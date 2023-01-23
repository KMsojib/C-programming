#include<stdio.h>
//function prototype
int find_max(int a[],int n);
int find_min(int a[],int n);
//main function
int main()
{
    int a[]={1,2,3,4,54,5,6,7,8};
    int n=8;
    int max=find_max(a,n);//function call
    int min=find_min(a,n);
    printf("\nThe maximu of this array is %d\n\n",max);
    printf("\nThe minimum of this array is %d\n\n",min);
    return 0;
}
//function deffination
int find_max(int a[],int n)
{
    int maxx=a[0];
    int i;
    for(i=1;i<n;i++)
    {
        if(a[i]>maxx)
        {
            maxx=a[i];
        }
    }
    return maxx;
}
int find_min(int a[],int n)
{
    int min=a[0];
    int i;
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}