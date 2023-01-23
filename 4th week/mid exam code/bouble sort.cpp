#include<stdio.h>
int main()
{
    int i,j;
    int a[]= {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
    int temp;

    for(j=0; j<5; j++)
    {
        for(i=0; i<5; i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(i=0; i<11-1; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
