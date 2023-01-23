#include<stdio.h>
int main()
{
    int n=10;
    int x=5;
    int a[n]={12,7,3,71,2,43,38,23,45,22};
    int b[n];
    int i;
    for(i=0;i<n;i++)
    {
       b[i]=a[i]+x;//only this line
    }
    for(i=0;i<n;i++)
    {
    	printf("%d ",b[i]);
	}
    return 0;
}
