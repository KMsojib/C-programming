#include<stdio.h>
int main()
{
	char a[10],i;
	a[0] = 98;
	a[1] = 97;
	a[2] = 'n';
	a[3] = 'a';
	a[4] = 'n';
	a[5] = 'a';
	a[6] = '\0';
	for(i=0;i<10-1;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
//b a n a n a
/*
second line of this code is a[1]=98. 98 is the ASCII value of smaller 
b. so it converted by b.because we use char data tyep.
thired statement is a[2]=97. 97 represented by the ASCII value of smaller
letter a. so its converted by a.
if we continue this code we find the output is banana 
*/
