#include<stdio.h>
int main()
{
	int i;
	char a[10];
		char ch = 'a';
		for(i = 0; i<8;i++)
		{
			a[i] = ch+8-i;
			printf("%c",a[i]);
		}
		a[8] = '\0';
		//after this execution of this block of this code
		/*
		first of all, the character of 'a' is converted by his Ascii value
		97.
		2. After enter this for loop when i=0 then condition is true and 
		enter the for loop and a[0]=97+8-0=105 s ASCII character is i
		3. loop is continuously running i-th vlaue when 7. then 
		i++;
		a[1]=97+8-1=104='h'//i=1
		i++;
		a[2]=97+8-2=103='g'//i=2
		i++;
		a[3]=97+8-3=102='f'//i=3
		i++;
		a[4]=97+8-4=101='e'//i=4
		i++;
		a[5]=97+8-5=100='d'//i=5
		i++;
		a[6]=97+8-6=99='c'//i=6
		i++;
		a[7]=97+8-7=98='b'//i=7
		i++;
		after when i is 8 then this loop break and outside of this loop and 
		find a[8]='\0' 
		if we print this then ourput become this type:
		ihgfedcb
		*/
		
//		for(i=0;i<8;i++)
//		{
//			printf("%c",a[i]);
//		}

}
