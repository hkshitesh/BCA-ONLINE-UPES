#include<stdio.h>

int max(int, int);

void main()
{
    int a=20;
    int b=30;
    int maximum;
    maximum=max(a,b);
    printf("Maximum is %d", maximum);
}
int max(int num1, int num2) 
{
   int result; 
   if (num1 > num2)
      result = num1;
   else
      result = num2; 
   return result; 
}
