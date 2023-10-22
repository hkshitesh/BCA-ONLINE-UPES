#include<stdio.h>

float avg(float a, float b, float c);

int main()
{
    int average;
    average = avg(3.0,4.0,5.0);
    printf("Average is %d", average);
}

float avg(float a, float b, float c)
{
    float av;
    float sum;
    sum = a+b+c;
    av = sum/3;
    return av;
}
