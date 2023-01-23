//https://www.codechef.com/problems/AUCTION
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int A,B,C;
        scanf("%d%d%d",&A,&B,&C);
        if(A>B && A>C)
            printf("Alice\n");
        if(B>A && B>C)
            printf("Bob\n");
        if(C>A && C>B)
            printf("Charlie\n");
    }
    return 0;
}
