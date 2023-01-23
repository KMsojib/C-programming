#include<stdio.h>

void Print_pattern(int x);
int main()
{
    int n;
    scanf("%d",&n);
    Print_pattern(n);
    return 0;
}
void Print_pattern(int x)
{
    int i,j;
    for(i=x;i>=1;i--)
    {
        for(j=1;j<=x-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
