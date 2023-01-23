#include<stdio.h>

int is_even(int lulu);

int main()
{
    int n;
    scanf("%d",&n);
    if (is_even(n))
        printf("Even\n");
    else
        printf("ODD\n");
    return 0;
}
int is_even(int lulu)
{
    if(lulu%2==0)
        return 1;
    else
        return 0;
}
