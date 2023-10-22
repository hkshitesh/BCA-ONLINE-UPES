#include<stdio.h>
void swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nSwapped Values are % d %d ",a,b);
}

void main()
{
    int x=5;
    int y=15;
    printf("\n Value of X, Y before swapping is %d %d ", x,y);
    swap(x,y);
    printf("\n Value of X, Y after swapping is %d %d ", x,y);
}