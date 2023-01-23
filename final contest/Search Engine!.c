#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int s,d;
        scanf("%d",&s);
        for(int i=0;i<n;i++){
            if(a[i]==s){
                d=i;
                printf("Case %d: %d",t,d+1);
                break;
            }
            else{
                printf("case %d: Not found\n",t);
                break;
            }
        }
    }
    return 0;
}
