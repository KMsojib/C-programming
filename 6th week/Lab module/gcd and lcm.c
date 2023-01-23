#include<stdio.h>

int GCD_count(int m,int n);
int LCM_count(int m,int n);

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int gcd=GCD_count(a,b);
    int lcm=LCM_count(a,b);

    printf("GCD: %d\n",gcd);
    printf("LCM: %d\n",lcm);
    return 0;
}
int GCD_count(int m,int n)
{
    int i;
    for(i=m;i<n;i++)
    {
        if(m%i==0 && n%i==0)
            return i;
    }
}
int LCM_count(int m,int n)
{
    return m*n/GCD_count(m,n);

}
