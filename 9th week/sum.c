#include<stdio.h>
int solve(int i,int n){
    if(i>n)return 0;
    int s=solve(i+1,n);
    return s+i;
}
int main()
{
    int n;
    scanf("%d",&n);
    int sum=solve(1,n);
    printf("Sum of 1 to %d is:%d\n",n,sum);
    return 0;
}

