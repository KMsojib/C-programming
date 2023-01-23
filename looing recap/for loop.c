#include<stdio.h>
#include<math.h>
int main()
{
	int i;
//	for(i=0; i<10; i++)
//	{
//		printf("%d Hello\n",i);
//	}
//	printf("value of i is:%d ",i);
//	for(i=2;i<50;i+=2)
//	{
//		printf("%d \n",i); 
//	}
//	int sum=0;
//	for(i=7;i<=100;i+=7)
//	{n
//		 sum+=i;
//	}
//	printf("%d \n",sum);
	int sum=0;
	for(i=1;i<=5;i++)
	{
		sum+=pow(i,3);
	}
	printf("%d ",sum);
	return 0;
}
