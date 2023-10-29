#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[30];
    int age;
};

void main()
{
    struct student s1;
    s1.roll=101;    
    strcpy(s1.name,"Amit");
    s1.age=24;
    printf("Rollno=%d, Name = %s , Age= %d", s1.roll, s1.name,s1.age);
}
