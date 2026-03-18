#include<stdio.h>
#include<math.h>
int main()    
{
   int a,b,c,d,e;
   float ans;
   scanf("%d%d",&a,&b);
   ans=(float)a/b;
   c=floor(ans);
   d=ceil(ans);
   e=round(ans);
   printf("floor %d / %d = %d\n",a,b,c);
   printf("ceil %d / %d = %d\n",a,b,d);
   printf("round %d / %d = %d",a,b,e);
   return 0;
}
