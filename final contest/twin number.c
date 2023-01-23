#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,s;
   scanf("%d%d",&n,&s);
   if(n%2==0 && s%2==0){
       int val=(s-n)%2;
       if(val==0){
       n=(s-n)/2;
       printf("%d\n",n);
   }
   }
    return 0;
}

