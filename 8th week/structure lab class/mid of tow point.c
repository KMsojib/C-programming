//find mid of two point
//using formula (x1+x2)/2 and (y1+y2)/2;
#include<stdio.h>
#include<math.h>
struct point{
    float x;
    float y;
};
struct point mid(struct point m, struct point n);
int main()
{
    //declared the strucutre
    struct point p1;
    struct point p2;

    //input the structure vlaue
    scanf("%f %f",&p1.x,&p1.y);
    scanf("%f %f",&p2.x,&p2.y);

    //create new structure variable
    struct point p3;
    //calling sturct function
    p3=mid(p1,p2);
    printf("%.2f,%.2f",p3.x,p3.y);
    return 0;
}
struct point mid(struct point m, struct point n)
{
    //return type is structure
  struct point ans;
  ans.x=(m.x+n.x)/2;
  ans.y=(m.y+n.y)/2;
  return ans;
};
