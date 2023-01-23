//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i*2-1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
///*
//5
//*
//***
//*****
//*******
//*********
//*/
#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i*2-1;j++)
		{
			if(i==n)//line==n hole
			{
				printf("*");
				continue;
			}
			if(j==1 || j==i*2-1)//
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}

