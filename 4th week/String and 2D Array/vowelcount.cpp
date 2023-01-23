#include<stdio.h>
#include<string.h>
int main()
{
    char sen[10000];
    fgets(sen,sizeof(sen),stdin);
    //fegets(string_name,sizeof(string),stdin);
    //stdin =standard input
    
    int i=0,count=0;
    while(sen[i]!='\0')
    {
        if(sen[i]=='a')
        count++;
        else if(sen[i]=='e')
        count++;
        else if(sen[i]=='i')
        count++;
        else if(sen[i]=='o')
        count++;
        else if(sen[i]=='u')
        count++;
        i++;         
    }
    printf("No of vowel is:%d",count);
    return 0;
}
