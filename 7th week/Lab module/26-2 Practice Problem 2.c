#include<stdio.h>
int find_max_min(int n,int num[],int *maxi,int *mini);
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int maxx,minn;
	find_max_min(n,a,&maxx,&minn);
	printf("maximu:%d\nMinimum: %d\n",maxx,minn);
	return 0;
}
int find_max_min(int n,int num[],int *maxi,int *mini)
{
	int i;
	*maxi=num[0];
	*mini=num[0];
	for(i=1;i<n;i++)
	{
		if(num[i]>*maxi)
			*maxi=num[i];
		if(num[i]<*mini)
			*mini=num[i];
	}
}
