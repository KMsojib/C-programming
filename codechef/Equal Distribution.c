//https://www.codechef.com/problems/EQUALDIST
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int A,B;
        scanf("%d%d",&A,&B);
        int s=A+B;
        if(s%2==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
