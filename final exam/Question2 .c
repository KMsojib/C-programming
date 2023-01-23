/*Sample input
  10
  Sample output
  0, 1, 1, 2, 3, 5, 8, 13, 21, 34
Fibonacci series without using arra
first value=0
second value=1
*/
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int fibo,First=0,Second=1;
    printf("%d, %d, ",First,Second);
    for(int i=2;i<n;i++)
    {
        fibo=First+Second;
        First=Second;
        Second=fibo;
        printf(" %d, ",fibo);
    }
    return 0;
}
