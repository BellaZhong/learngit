#include <stdio.h>
#include <ex2-2-2.c>
#include <ex2-2-3.c>

int main()
{
    int and(int,int);
    int or(int,int);
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=and(a,b);
    printf("%d&&%d=%d\n",a,b,c); 
    c=or(a,b);


    printf("%d||%d=%d\n",a,b,c);
    return 0;
} 
