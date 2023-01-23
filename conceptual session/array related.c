//find 3rd largest value
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int input[n];

    int i,j;
    for(i=0;i<n;i+=1)
    {
        scanf("%d",&input[i]);
    }
    int largest=input[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            lagest=input[i];
        }
    }
    int arr[largest+1];
    for(i=0;i<largest;i++)
    {
        arr[i]=0;
    }

}
