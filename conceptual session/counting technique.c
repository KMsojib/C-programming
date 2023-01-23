/*
1. Take Input/Initialize
2. find the largest element of this array
(string er janno largest element holo z)

3. Largest element+1 size er ekta array niye 0
deye fill kore detam.
4.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="abcdefghijklmnopqrstuvwxyz";
    int i=0;
    while(s[i]!='\0')
    {
        int alphabetValue=(s[i]-'a')+1;//if +1 dele natural number er moto pirnt hobe
        //ar +1 na dele 0 theke suru hobe
        printf("%c->%d\n",s[i],alphabetValue);
        i++;
    }
    return 0;
}
