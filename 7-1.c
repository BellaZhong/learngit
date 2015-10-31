#include <stdio.h>

int main()
{
    int day;
    printf("please input (0-7)");
    scanf("%d",&day);
    switch(day)
    {
        case 0:printf("Monday");break;
        case 1:printf("Tuesday");break;
        default:printf("hi,idiot");break;
    }
    return 0;
} 
