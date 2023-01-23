/* Overview
1. create a structure
2. create a students type array like
 struct student s[size];
3. input info using loop
4. create a function to print this whole info
*/
#include<stdio.h>
#include<string.h>
struct students{
    int roll;
    char name[40];
    double mark;
};
void printstudent_info(int n,int i,struct students inF)
{
    printf("Information of student %d\n",i);
    printf("Roll-> %d\n",inF.roll);
    printf("Name-> %s\n",inF.name);
    printf("Mark-> %lf\n",inF.mark);
}
int main()
{
    int i,n;
    printf("How many student info you want to store:");
    scanf("%d",&n);
    struct students s[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i].roll);
        scanf("%s",s[i].name);
        scanf("%lf",&s[i].mark);
    }
    for(i=0;i<n;i++)
    {
        printstudent_info(n,i,s[i]);
    }
    return 0;
}

