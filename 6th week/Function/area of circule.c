#include<stdio.h>
#include<math.h>
//#define pi 3.1416;

float Area_of_circle(float r,float pi);

int main()
{
    float red;
    scanf("%f",&red);
    float pi=3.1416;

    float redius=Area_of_circle(red,pi);
    printf("Area of circle is:%.2f\n",redius);
    return 0;
}
float Area_of_circle(float r,float pi)
{
    float res=pi*pow(r,2);
    return res;
}
