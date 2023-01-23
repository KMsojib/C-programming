//https://www.codechef.com/problems/AGELIMIT/
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int X,Y,A;
        scanf("%d%d%d",&X,&Y,&A);
        if(A>=X && A<Y){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
/*
5
21 34 30
25 31 31
22 29 25
20 40 15
28 29 28
output
YES
NO
YES
NO
YES
*/
