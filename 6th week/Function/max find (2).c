//second class


#include<stdio.h>

int max_three(int x,int y,int z)
{
    if(x>y && x>z)
        return x;
    if(y>x && y>z)
        return y;
    return z;
}
int main()
{
    int a,b,c,i,m;
    for(i=0;i<5;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        m=max_three(a,b,c);
        printf("Maximum value is :%d\n",m);
    }
}
