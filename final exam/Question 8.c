#include<stdio.h>
#include<stdlib.h>

struct student{
    char name[100];
    int roll;
    double marks;
};
int main()
{
    struct student s;
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s",s.name);
    printf("Enter roll number: ");
    scanf("%d",&s.roll);
    printf("Enter marks: ");
    scanf("%lf",&s.marks);

    printf("\nDisplaying information: \n");
    printf("Name: %s\n",s.name);
    printf("Roll number: %d\n",s.roll);
    printf("Marks: %0.lf",s.marks);

    return 0;
}
