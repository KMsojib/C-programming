//Remove duplicated value in array just print
//only unique value
//1,2,3,3,4
//output: 1,2,3,4

#include<stdio.h>
int main()
{
    int n;//n=size;
    scanf("%d",&n);
    int arr[n],i;

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int unique_array[n];
    int unique_array_index=0;

    for(i=0;i<n;i++)
    {
        int select=arr[i];
        int found=0;
        int j;
        for(j=0;j<n;i++)
        {
            if(unique_array[j]==arr[i])
            {
                found=1;
            }
        }
        if(found==0)
        {

            unique_array[unique_array_index]=arr[i];
            {
                unique_array_index++;
            }
        }
    }
    for(int k=0;k<unique_array_index;k++)
    {
        printf("%d ",unique_array[k]);
    }

    return 0;
}
