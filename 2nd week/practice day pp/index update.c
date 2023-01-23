/*
You will be given an positive integer N and after that an integer array of size N.
Then you will be given Q which refers to queries. For each query you will be given i and v where i refers
 to the index and v to value. You need to add the value to that index.
 After all of the queries print the values

Sample Input:           Sample Output:
5                       11 2 8 4 10
1 2 3 4 5
3

0 10
2 5
4 5
*/
#include<stdio.h>
int main()
{
    int N,i;
    printf("Enter the size: ");
    scanf("%d",&N);

    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    //element adding
    int q,x,b;
    scanf("%d",&q);

    for(i=0;i<q;i++)
    {
       scanf("%d %d",&x,&b);
       a[x]+=b;
    }
    printf("after new element insert:");
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
