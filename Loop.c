#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        printf("%d\t",i);      //"\t" --> 'tab space'
    }
    return 0;
}
