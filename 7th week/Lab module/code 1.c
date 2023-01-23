#include<stdio.h>
void print_Fpatt(int n);
int main()
{
	int i,n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		print_Fpatt(i);
	}
	return 0;
}
void print_Fpatt(int n)
{
	int i;
	for(i=0;i<=n;i++)
	{
		printf("*");
	}
	printf("\n");
}

