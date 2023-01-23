//find the sum of digit
//check the digit are prime or not
//use two functin first find sum of digit
//second find prime or not

#include<stdio.h>
int sum_of_dig(int n);
int is_prime(int n);

int main()
{
	int n;
	scanf("%d",&n);
	if(is_prime(sum_of_dig(n))==1)
		printf("This is prime and sojib number\n");
	else
		printf("No");
	return 0;
}
sum_of_dig(int n)
{
	int summ=0;
	while(n>0)
	{
		summ+=n%10;
		n=n/10;
	}
	return summ;
}
int is_prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
