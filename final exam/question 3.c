#include<stdio.h>
void pass_value(int x,int y);
void pass_ref(int *x,int *y);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before swapping:a=%d,b=%d\n",a,b);
    pass_value(a,b);
    pass_ref(&a,&b);
    printf("Pass by reference and swap :- a:%d, b:%d\n",a,b);
    return 0;
}
void pass_value(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("Pass by value and swap:x=%d,y=%d\n",x,y);
}
void pass_ref(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
