#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int t;
   scanf("%d",&t);
   while(t--){
       int l,r;
       scanf("%d%d",&l,&r);
       printf("1 ");
       for(int i=2;i<=r;i++){
           if(l%i!=0)
           {
              printf("%d ",l);
              l++;
           }
           else{
              continue;
           }
       }
   }
    return 0;
}
