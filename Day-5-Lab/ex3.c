#include<stdio.h>

void main()
{
    int i;
    int a[100];
    for(i=0;i<100;i++)
    {
        a[i]=i;
    }
    for(i=0; i<10;i++)
    {
        printf("\n%d",a[i]);
    } 
}