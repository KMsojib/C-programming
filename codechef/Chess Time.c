//https://www.codechef.com/problems/CHESSTIME
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int N;
        scanf("%d",&N);
        int s=N*60/20;
        printf("%d\n",s);
    }
    return 0;
}
