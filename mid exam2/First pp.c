#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];//="hElLoWorld";
	fgets(str,sizeof(str),stdin);
	int i;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]+=32;
		}
		
		else if(str[i]>='a' && str[i]<='z')
		{
			str[i]-=32;
		}
		printf("%c",str[i]);
	}
	return 0;
}

