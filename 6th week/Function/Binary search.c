#include<stdio.h>
int main()
{
    int ara[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int low_ind=0;
    int high_ind=15;
    int mid_ind;
    int num;
    printf("Enter number you want to search:\n");
    scanf("%d",&num);

    while(low_ind<=high_ind)
    {
        mid_ind=(low_ind+high_ind)/2;
        {
            if(num==ara[mid_ind])
            {
                break;
            }
            if(num<ara[mid_ind])
            {
                high_ind=mid_ind-1;
            }
            else
            {
                low_ind=mid_ind+1;
            }
        }
    }
    if(low_ind>high_ind)
    {
        printf("%d is not found in this array\n",num);
    }
    else
    {
        printf("%d is found  in the array. It is the %dth element of the arra.\n",ara[mid_ind],mid_ind);
    }
    return 0;
}