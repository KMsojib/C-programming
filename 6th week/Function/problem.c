/*sojib numbers ki na check korbo,sojib number howa janno kicu conditions
1. '7' must be present
2. digit sum must be 10
3. last digit must be prime
*/
#include<stdio.h>
int seven_present(int n);
int summ_digit(int n);
int lastdg_prime(int n);
int main()
{
    int n;
    scanf("%d",&n);
    if(seven_present(n)==1 && summ_digit(n)>10 && lastdg_prime(n)==1)
        printf("Kawsar's number\n");
    else
        printf("No\n");
}
int seven_present(int n)
{
    while(n>0)
    {
        if(n%10==7)
            return 1;
        n=n/10;
    }
    return 0;
}
int summ_digit(int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int lastdg_prime(int n)
{
    if(n%2==0 || n%3==0 || n%5==0 || n%7==0)
        return 1;
    else
        return 0;
}
