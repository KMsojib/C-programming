#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30]="kawsar";
    char s2[]=" mahmud";

    int len=0,i=0;
    while(s1[i]!='\0')
    {
        len++;
        i++;
    }
    int j=0;
    while(s2[j]!='\0')
    {
        s1[len+j]=s2[j];
        j++;
    }
    printf("String: %s",s1);
    return 0;
}
