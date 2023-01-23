#include<stdio.h>
#include<math.h>
float f(float a,float b);//f(a,b) function
int absulate(int x);
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float ans;
    ans=f(x,y);
    printf("The value of this function %.3f\n",ans);
    return 0;
}
float f(float a,float b)
{
   int tempans=absulate(a)+(b+4)*(b+4);
   return sqrt(tempans);
}
int absulate(int a)
{
    if(a>=0)
        return a;
    else
        return (-1)*a;//absulate value always positive.
        //so multiplication with -1 if a is negative
}
