//print N to 1 using recursion
#include<stdio.h>

void solve(int n);
int main()
{
    int n;
    scanf("%d",&n);
    solve(n);
    return 0;
}
void solve(int n)
{
    if(n<0)return;
    printf("%d\n",n);
    solve(n-1);
}
