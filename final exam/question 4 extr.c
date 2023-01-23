#include <stdio.h>
#include<string.h>
void solve(char s[]);
int main()
{
    char s[1000];
    scanf("%s", &s);
    solve(s);
    return 0;
}
void solve(char s[])
{
    int arr[26],j,k;
    for ( j = 0; j < 26; j++)
    {
        arr[j] = 0;
    }
    int i = 0;
    int count;
    while (s[i] != '\0')
    {
        count = s[i] - 'a';
        arr[count]++;
        i++;
    }
    for (j = 0; j < 26; j++)
    {
        for (k = 0; k < arr[j]; k++)
        {
            printf("%c", (char)(j + 'a'));
        }
    }
}
