#include<stdio.h>
void reverse(int i,int n)
{
    if(i>n)return;
    reverse(i+1,n);
    printf("%d> ",i);
}
int main()
{
    int n;
    scanf("%d",&n);
    reverse(1,n);
    return 0;
}
