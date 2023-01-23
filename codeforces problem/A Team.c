#include<stdio.h>
int main()
{
    int a,b,c,N,i,count=0;
    printf("Enter the problem number: ");
    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a+b+c>=2)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
