#include<stdio.h>
#include<string.h>
Thrise_F(char s[],char n);
int main()
{
    char s[1000];
    fgets(s,sizeof(s),stdin);
    int count=0;
	if(Thrise_F(s,'1'))
		count++;
	if(Thrise_F(s,'7'))
		count++;
	if(Thrise_F(s,'9'))
		count++;
	if(count==3)
		printf("Yes");
	else
		printf("No");
    return 0;
}
Thrise_F(char s[],char n)
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==n)
        {
            return 1;
        }
    }
    return 0;
}

