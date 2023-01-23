// Manhattan distance: |x1-x2|+|y1-y2|
//abs ber korte hobe
//(x1,y1) and (x2,y2)

#include<stdio.h>
#include<math.h>

struct point{
    int x;
    int y;
};
int manhat_dis(struct point p1,struct point p2);
int main()
{
    struct point p1;
    struct point p2;
    scanf("%d %d",&p1.x,&p1.y);
    scanf("%d %d",&p2.x,&p2.y);

    int ans=manhat_dis(p1,p2);
    printf("Manhattan Distance is:%d",ans);
    return 0;
}
int manhat_dis(struct point p1,struct point p2)
{
    int res=abs(p1.x-p2.x)+abs(p1.y-p2.y);
    return res;
}

