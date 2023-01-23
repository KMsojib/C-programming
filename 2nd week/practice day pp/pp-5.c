#include<stdio.h>
int main()
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d",&N);

    int a[N],i,j;
    for(i=0; i<N; i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    int target,p=0;
    printf("Enter the target value: ");
    scanf("%d",&target);

    for(i=0; i<N; i++)
    {
        for(j=1; j<N-1; j++)
        {
            if(a[j]+a[i]==target)
            {
                p++;
                //break;
            }
        }
    }
    if(p==1)
    {
        printf("Yes");
    }
    else
    {
        printf("NO");

    }
    return 0;
}
