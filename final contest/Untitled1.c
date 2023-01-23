#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long long int n,target;
    scanf("%lld %lld",&n,&target);
    long long int nums[n];
    for(int i=0; i<n; i++)
    {
        scanf("%lld ",&nums[i]);
    }
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            int sum=nums[i]+nums[j];
            if(sum==target)
            {
                printf("[%d,%d]",i,j);
                break;
            }
            else
            {
                printf("NULL\n");
                break;
            }
        }
    }
    return 0;
}
