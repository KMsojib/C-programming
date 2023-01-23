//user define function

#include<stdio.h>
void Print_value(int n);

int main()
{
    int n;
    scanf("%d",&n);
    Print_value(n);
    return 0;
}

void Print_value(int x)
{
    int i;
    if(x>0){
        for(i=x;i>=-x;i-=1){
            printf("%d ",i);
        }
    }
    else if(x<0){
        for(i=x;i<=-x;i++){
            printf("%d ",i);
        }
    }
}
