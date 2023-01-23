#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100]="Phi";
    char s2[]="tron";
    int len=0,i=0,j=0;

    while(s1[i]!='\0')
    {
        i+=1;
        len+=1;
    }
    while(s2[j]!='\0')
    {
        s1[len+j]=s2[j];
        j++;
    }
    printf("string is:%s",s1);
    return 0;
}
