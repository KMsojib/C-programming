#include<stdio.h>
int solve(int ara[],int n){
    if(n==0)return 0;
    int s=solve(ara+1,n-1);
//    return s+ara[0];
    return s+*(ara);
}
int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    int sum=solve(ara,n);
    printf("Sum of Array:%d\n",sum);
    return 0;
}
