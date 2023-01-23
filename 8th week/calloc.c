#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int *ptr;
    ptr=(int*) calloc(n,sizeof(int));//koyta ghor nibe and oi ghor gulor tyep
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(i=0;i<n;i++)
    {
        printf("%d th position value:%d\n",i,*(ptr+i));
    }
    free(ptr);
    return 0;
}
