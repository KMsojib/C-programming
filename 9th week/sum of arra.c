#include<stdio.h>
int solve(int ara[],int i,int n){
    if(i==n)return 0;
    int s=solve(ara,i+1,n);
    return s+ara[i];
}
int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    int sum=solve(ara,0,n);
    printf("Sum of Array:%d\n",sum);
    return 0;
}
