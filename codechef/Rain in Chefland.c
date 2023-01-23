//https://www.codechef.com/problems/RAINFALL1
#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int X;
        scanf("%d",&X);
        if(X<3)
            printf("LIGHT\n");
        else if(X>=3 && X<7)
            printf("MODERATE\n");
        else if(X>=7)
            printf("HEAVY\n");
    }
	return 0;
}

