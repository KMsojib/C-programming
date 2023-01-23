#include<stdio.h>
#include<string.h>
int main()
{
    char s[]={"bbeaaawkk"};
    int larg=26;
    int freq[larg+1];
    for(int i=0;i<=larg;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<=larg;i++)
    {
        freq[(s[i]-'a')+1]++;
    }
    for(int i=0;i<=larg;i++)
    {
        printf("%d ",freq[i]);
    }
    return 0;
}
