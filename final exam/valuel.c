#include <stdio.h>
void solve(char s[])
{
    int arr[26],j,k;
    for ( j = 0; j < 26; j++)
    {
        arr[j] = 0;
    }
    for(j=0;j<26;j++)
    {
    	printf("%d ",arr[j]);
	}
    int i = 0;
    int n;
    while (s[i] != '\0')
    {
        n = s[i] - 'a';
        arr[n]++;
        i++;
    }
    printf("\n\n");
    for(i=0;i<26;i++)
    {
    	printf("%d ",arr[i]);
	}
	printf("\n\n");
    for (j = 0; j < 26; j++)
    {
        for (k = 0; k < arr[j]; k++)
        {
            printf("%c", (char)(j + 'a'));
        }
    }
}
int main()
{
    char s[1000];
    scanf("%s", &s);
    solve(s);
    return 0;
}

