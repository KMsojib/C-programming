#include<stdio.h>

int main()
{
	 int n,i;
	scanf("%d",&n);
	if(n>=0)
	{
		for(i=n;i>=0;i--)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
