#include <stdio.h>

int add(int x,int y)
{
   int z;
   z=x+y;
   return z;
}

int main()
{
    int add(int,int);
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("%d+%d=%d\n",a,b,c);
}
