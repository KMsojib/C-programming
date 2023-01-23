// bus passenger weight count
#include <stdio.h>

int main() {
    int n,w,sum=0,i;

    printf("Enter the number of passenger: ");
    scanf("%d",&n);
    //using for loop
    for(i=1;i<=n;i++)
    {
        printf("passenger %d: ",i);
        scanf("%d",&w);
        sum+=w;
    }
    printf("The total weight of passenger is:%d",sum);

    return 0;
}
