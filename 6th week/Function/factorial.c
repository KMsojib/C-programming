#include<stdio.h>
int fact(int a);//function prototype
int main()
{
    int n;
    scanf("%d",&n);
    int factorial=fact(n);//factorial variable receive answer
    printf("Factorial value is:%d\n",factorial);//just print the value
    return 0;
}
//function declaration
int fact(int a)//n is receive by a
{
    int ans=1,i;//initially ans=1
    for(i=1;i<=a;i++)//loop is traverse by n time
    {
        ans*=i;//simply multiply ans * i
    }
    return ans;//return ans main function
}
