#include<stdio.h>
int is_prime(int x)
{
    int i;
    if(x==1)
    {
        return 0;
    }
    else if(x==2)
    {
        return 1;
    }
    else
    {
        for(i=2; i<x; i++)
        {
            if(x%i==0)
            {
                return 0;
            }
            return 1;
        }
    }
}

int main()
{
    int a;
    scanf("%d",&a);
    int ans=is_prime(a);
    if(ans==1)
    {
        printf("%d is prime.\n",a);
    }
    else
    {
        printf("%d is composite.\n",a);
    }
    return 0;
}
