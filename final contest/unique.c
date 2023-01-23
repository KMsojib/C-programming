#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int dummy_array[26];
    for(int i=0;i<=26;i++){
        dummy_array[i]=0;
    }
    char s[n];
    scanf("%s",s);
    for(int i=0;i<=26;i++){
        int val=s[i]-'a';
        dummy_array[val]++;
    }
    for(int i=0;i<=26;i++){
        if(dummy_array[i]==1){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
