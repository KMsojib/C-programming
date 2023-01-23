//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    //len-1 because it count our enter space
//    //so we should avoid this enter thats why len-1
//    char name[100];
//    int i=0;
//    scanf("%d",&i);
//    while(i>=4)
//    {
//        fgets(name,sizeof(name),stdin);
//        //int len=strlen(name)-1;
//        if(strlen(name)>10)
//        {
//            printf("%c%d%c\n",name[0],strlen(name)-2,name[strlen(name)]);
//        }
//        else
//        {
//            puts(name);
//        }
//        i++;
//    }
//    return 0;
//}
#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,m;
    char x[6000];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%s",&x);
        int l=strlen(x);

        if(l>10)
        {
            printf("%c",x[0]);
            printf("%d",l-2);
            printf("%c\n",x[l-1]);
        }
        else printf("%s\n",x);
    }
    return 0;
}
