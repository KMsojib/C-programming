/*
Problem Statement

Rahim was decorating the book shelf with his books.
 He has two bookshelves, and he wants to put equal books in each book shelf. At first he put some random number of books on both shelves by guessing numbers. Now he wants to know the difference between the number of books in these two shelves so that he can rearrange them. Help him!

You will be given two integer numbers A and B ,
 you need to print the difference between these two numbers. Remember, difference is always positive.

Input Format

Input will contain two integers A and B.
Constraints

0 <= A <= 100
0 <= B <= 100
Output Format

Output a single line, the difference between A and B.
Sample Input 0

10 50
Sample Output 0

40

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,sub;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        sub=a-b;
    }
    else if(a<b)
    {
        sub=b-a;
    }
    printf("%d",sub);
    return 0;
}


