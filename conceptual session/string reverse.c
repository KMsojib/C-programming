#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);//input a string

    int i=0,len=0;
    while(s[i]!='\0')//find null character
    {
        i++;
        len++;
    }
    i=0;
    for(i=len-1;i>=0;i--)//loop for reverse order
    {
        printf("%c ",s[i]);
    }
    return 0;
}
