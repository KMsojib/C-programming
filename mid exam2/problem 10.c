#include<stdio.h>
#include<string.h>

char Mark_std(int mark);

int main()
{
	int mark;
	scanf("%d",&mark);
    char ch=Mark_std(mark);
    printf("%c",ch);

	return 0;
}
char Mark_std(int mark)
{
	if(mark>=80 && mark<=100)
	{
		return 'A';
	}
	else if(mark>=60 && mark<=79)
    {
        return 'B';
    }
    else if(mark>=40 && mark<=59)
    {
        return 'C';
    }
    else if(mark>=0 && mark<=39)
    {
        return 'F';
    }
}
