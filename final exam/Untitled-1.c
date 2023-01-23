/*
You are given a string  S of small letters.Now sort the string
in ascending order using frequency array.Write the steps to solve
this problem with  proper diagram.Lastly write a C program for it
and use function in this program. 	                           (10)

Note - The given input may contain duplicate characters

Sample input
adsarbrro

Sample output
aabdorrrs
code output:
aabdorrrs
*/
#include<stdio.h>
#include<string.h>
int i,j;
char temp;

void str_comp(char a[],int size);
int main()
{
    char s[]={"adsarbrro"};
    int n=strlen(s);
    str_comp(s,n);
    return 0;
}
void str_comp(char a[],int size)
{
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%c",a[i]);
    }
}
