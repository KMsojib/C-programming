/*Write a program in C to check the largest number among
three given numbers using the function*/
#include<stdio.h>

int find_max(int x,int y,int z)
{
    if(x>y && x>z)
        return x;
    else if(y>x && y>z)
        return y;
    else
        return z;
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int m;
    m=find_max(a,b,c);
    printf("Maximum value is:%d\n",m);
    return 0;
}

