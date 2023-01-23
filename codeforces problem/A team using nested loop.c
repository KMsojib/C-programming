#include<stdio.h>
int main()
{
    int N,a,i,j,counter,solve=0;
    scanf("%d",&N);

    for(i=0; i<N; i++) //for traversing all value
    {
        counter=0;
        for(j=0; j<3; j++)
        {
            scanf("%d",&a);
            counter+=a;
        }
         if(counter>=2)
                solve++;
    }
    printf("%d\n",solve);
    return 0;
}
