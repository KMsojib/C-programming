#include<stdio.h>
#define input int
#define p printf
#define s scanf
#define N \n

int main()
{
    int a[]= {1,3,5,6,7,8,12,9,11,2};
    int i,max=0;
    int len=sizeof(a)/sizeof(a[0]);
    for(i=0; i<len; i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("N The maximum value is:%d\n",max);
    int ara[max];
    for(i=0; i<max-1; i++)
    {
        ara[i]=0;
    }
    for(i=0; i<=max-1; i+=1)
    {
        printf("%d ",ara[i]);
    }
    for(i=0; i<len; i+=1)
    {
        ara[a[i]]+=1;
    }
    printf("\n\n");
    for(i=0; i<=max-1; i+=1)
    {
        printf("%d ",ara[i]);
    }
    printf("\n");
    input count=0,largest;
    printf("Enter you want to check this location largest element:\n");
    scanf("%d",&largest);
    for(i=max-1; i>=0; i--)
    {
        if(ara[i]==1)
            count++;
        if(count==largest)//define kore dele tahole evabe hobe
// aro jodi user bole tahole ekta vlariable declare koer decii
        //if(count==largest)
        {
            printf("The largest value is:%d\n",i);
            break;
        }
    }
    return 0;
}
