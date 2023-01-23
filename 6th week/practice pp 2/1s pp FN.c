/*You are given a string S of (0-1) , (a-z) and (A-Z) . Now tell that whether the string is a binary string or not
Note – A binary string is a string that contains only 0 and 1.
Print YES if the string is a binary string otherwise print NO.
Note – Implement it using function
Sample Input 1: Sample Output 1:
aB1Bsi1001sd NO
Sample Input 2: Sample Output 2:
0011110 YES
*/

#include<stdio.h>
int is_binary(char s[],int len)
{
    int count=1;
    int i;
//     for(i=0;s[i]!='\0';i++)
    for(i=0;i<len;i++)
    {
        if(s[i]=='1' || s[i]=='0')
        {
            count+=1;
        }
    }
    if(count==len)
    {
        printf("Yes");
    }
    else
    {
        printf("No\n");
    }

}
int main()
{
    char s[2000];
    fgets(s,sizeof(s),stdin);
    int len=strlen(s);
    is_binary(s,len);
    return 0;
}
