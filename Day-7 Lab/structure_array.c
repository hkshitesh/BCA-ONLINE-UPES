#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[30];
    float math;
    float phy;
};

void main()
{
    struct student s[100];
    int i=0;
    for(i=0; i<100; i++)
    {
        s[i].roll=101;    
        strcpy(s[i].name,"Amit");
        s[i].math=25.5;
        s[i].phy=70;
    }
    for( i=0; i<100; i++)
    {
    printf("\nRollno=%d, Name = %s , Maths= %f , Phy= %f", s[i].roll, s[i].name,s[i].math, s[i].phy);
    }
}
