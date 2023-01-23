#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int *ptr;
    ptr=(int*) malloc(n*sizeof(int));//type casting, malloc(koyta nibo multiply
    //sizeof(oi data tyep)
    if(ptr==NULL)
    {
        printf("Memory doesn't allocate\n");
    }
    else
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",(ptr+i));
        }
        for(i=0; i<n; i++)
        {
            printf("%d th position value:%d\n",i,*(ptr+i));
        }
    }
    free(ptr);
    return 0;
}
