#include<stdio.h>
int main()
{
    int i,j,len=0,temp=0;
    int a[]= {12,7,9,1,3,73,11,15,62,19,4};
	for(j=0;j<11;j++)
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
        for(i=0; i<11; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
	}
    return 0;
}
