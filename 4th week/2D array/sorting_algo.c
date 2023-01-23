#include<stdio.h>
#include<math.h>
int main()
{
    int ara[8]= {12,7,9,3,15,2,6,5};
    int i,j,N=8;
    int sort_ara[8];
    for(i=0; i<N; i++)
    {
        printf("%d ",ara[i]);
    }
    printf("\n");

    int min;
    int min_idx;
    for(j=0; j<N; j++)
    {
        min=ara[0];
        min_idx=0;

        for(i=0; i<N; i++)
        {
            if(ara[i]<min)
            {
                min=ara[i];
                min_idx=i;
            }
        }
        sort_ara[j]=min;//find the mininum value and update it sorted array
        ara[min_idx]=999;// minimum value update by 999 value thats why it's now highest n

        for(i=0; i<N; i++)
        {
            printf("%d ",ara[i]);
        }
        printf("\n");
    }
    for(i=0;i<N;i++)
    {
    	printf("%d ",sort_ara[i]);
	}
    return 0;
}

