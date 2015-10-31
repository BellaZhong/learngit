#include <stdio.h>

struct student
{
    int num;
    char name[8];
    char sex;
    float score[2];
}stu1={2001,"Bella",'M',86.00,92.2};


int main()
{
    printf("%d\t%s\t%c\t%f\t%f\t\n",stu1.num,stu1.name,stu1.sex,stu1.score[0],stu1.score[1]);
    return 0;
}
