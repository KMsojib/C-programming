#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		if(i==(n-1))
		{
			printf("sum=%d ",a[i]);
		}
	}
	return 0;
}
