#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x>10&& y<10)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
	return 0;
}
