//without using user define function

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    if(n>0)
    {
        for(i=n; i>=-n; i--)
        {
            printf("%d ",i);
        }
    }
    else if(n<0)
    {
        for(i=n; i<=-n; i++)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
