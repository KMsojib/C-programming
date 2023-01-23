/*

*/
#include<stdio.h>
int main()
{
    int N,count=0;
    printf("Enter the value of N:");
    scanf("%d",&N);

    int a[N],uniq,i;

    for(i=0;i<N;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    uniq=a[0];
    for(i=0;i<N;i++)
    {
        if(uniq==a[i])
        {
            count++;
        }
        else
        {
            printf("NO");
            break;
        }
    }
    if(count==N)
    {
        printf("Yes");
    }
    return 0;
}
