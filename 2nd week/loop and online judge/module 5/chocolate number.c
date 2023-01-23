#include<stdio.h>

int main()
{
    int n;
    printf("Enter the chocolate number: ");
    scanf("%d",&n);

    int choc=n;
    int pack=n;

    while(pack>=4)
    {
        choc+=(pack/4);
        pack=(pack/4)+(pack%4);
    }
    printf("The total chocolate we get in stall: %d",choc);
    return 0;
}
