//Write function find gcd of two number
#include<stdio.h>

int My_gcd(int x,int y)
{
	int i;
	for(i=x;i>=1;i--)
	{
		if(x%i==0 && y%i==0)
		{
			printf("GCD: %d\n",i);
			break;
		}
	}
}
void My_lcm(int x,int y)
{
    int i,flag=0;
	for(i=x;i>=1;i--)
	{
		if(x%i==0 && y%i==0)
		{
			flag=i;
			break;
		}
	}
	int lcm=(x*y)/flag;
	printf("LCM: %d\n",lcm);
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	My_gcd(a,b);
	My_lcm(a,b);
	return 0;
}
