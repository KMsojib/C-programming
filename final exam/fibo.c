#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    printf("0");
    if (n == 1)
    {
        return 0;
    }
    printf(", 1");
    if (n == 2)
    {
        return 0;
    }
    int first = 0, second = 1;
    for (i = 3; i <= n; i++)
    {
        int fibo = first + second;
        first = second;
        second = fibo;
        printf(", %d",fibo);
    }
 
    return 0;
}

