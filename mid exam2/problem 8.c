#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
    int n,i;
	scanf("%s",s);
	scanf("%d",&n);

	for(i=0;i<=strlen(s);i++)
	{
		if(s[i]=='y')
		{
			s[i]-=25;
		}
		else
        {
           s[i]+=n;
        }
	}
	for(i=0;i<=strlen(s);i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}
