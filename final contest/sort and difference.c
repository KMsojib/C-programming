#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d",&n);
    int A[n],B[n],sub[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0; i<n; i++)
    {
        scanf("%d",&B[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<(n-1); j++)
        {
            if(A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<(n-1); j++)
        {
            if(B[j]<B[j+1])
            {
                int temp=B[j];
                B[j]=B[j+1];
                B[j+1]=temp;
            }
        }
    }
//    for(int i=0; i<n; i++)
//    {
//        sub[i]=A[i]-B[i];
//        printf("%d ",sub[i]);
//    }
    int subb=0;
    for(int i=0; i<n; i++)
    {
        subb=A[i]-B[i];
        printf("%d ",subb);
    }
    return 0;
}

