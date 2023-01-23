#include<stdio.h>
#include<string.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    char s[n];
    scanf("%s",s);
    int A=0,T=0,C=0,G=0;
    for(int i=0;i<strlen(s);i++)
    {
       if(s[i]=='A')
       {
          A++;
       }
       else if(s[i]=='T')
       {
           T++;
       }
       else if(s[i]=='C')
       {
           C++;
       }
       else if(s[i]=='G')
       {
           G++;
       }
    }

    if(A>T && A>C && A>G)
    {
        printf("%d",A);
    }
    else if(T>A && T>C && T>G)
    {
        printf("%d",T);
    }
    else if(C>A && C>T && C>G)
    {
        printf("%d",C);
    }
    else
    {
        printf("%d",G);
    }
    return 0;
}
