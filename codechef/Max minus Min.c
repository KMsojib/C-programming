//https://www.codechef.com/problems/MAXDIFFMIN
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int max=0,min=0;
        if(a>b && a>c){
            max=a;
        }
        else if(b>a && b>c){
            max=b;
        }
        else if(c>a && c>b){
            max=c;
        }
        else if(a<b && a<c){
            min=a;
        }
        else if(b<a && b<c){
            min=b;
        }
        else if(c<a && c<b){
            min=c;
        }
        int ans=max-min;
        printf("%d\n",ans);
    }
    return 0;
}
