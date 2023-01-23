#include<stdio.h>
#include<string.h>
int main()
{
	//char s="america"
	//first error is without using []this breaket
	//second error is doesn't using semicolon(;).
	char s[]="america";
	int len=strlen(s);
	int i;
	printf("%d \n",len);
	for(i=0;i<len;i++)
	{
		printf("%c",s[i]);
	}
	//now this is fix now
}
