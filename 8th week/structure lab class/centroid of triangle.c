//centroid triangle of a triangle
//formula: (x1+x2+x3)/3 and (y1+y2+y3)/3
/*
1. create structure for two point x and y
2. create structure for a triangle for three point A B C
3. create function using structure to return 2 point
formula: (x1+x2+x3)/3 and (y1+y2+y3)/3
4. in main function : call triangle and pass the point example : p1, p2,p3
5.
*/
#include<stdio.h>
#include<math.h>

struct point{//point er structure
    float x;
    float y;
};
struct triangle{
    struct point A;
    struct point B;
    struct point C;
};
struct point centroid(struct triangle t)
{
    struct point ans;
    ans.x=(t.A.x+t.B.x+t.C.x)/3;
    ans.y=(t.A.y+t.B.y+t.C.y)/3;
    return ans;
};
int main()
{
    struct point p1;
    struct point p2;
    struct point p3;

    scanf("%f %f",&p1.x,&p1.y);
    scanf("%f %f",&p2.x,&p2.y);
    scanf("%f %f",&p3.x,&p3.y);
    //call triangle structure
    struct triangle t={p1,p2,p3};
    //call centroid return structure
    struct point c=centroid(t);
    printf("The centroid:(%f,%f)",c.x,c.y);
    return 0;
}
/*
1 1
4 5
1 5
The centroid:2.000000,3.666667
*/
