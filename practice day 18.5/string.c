#include<stdio.h>
#include<string.h>
int main()
{
	char s[]="dddaaabccdffgzzza";
	int i;
	int len=strlen(s);
	while(i<len)
	{
		if(s[i]!=s[i+1])
		{
			printf("%c",s[i]);
		}
	}
}
