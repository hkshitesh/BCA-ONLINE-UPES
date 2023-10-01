#include<stdio.h>
void main()
{
    int a[10];
    int sum=0;
    printf("Enter 10 numbers");
    for(int i=0; i<10;i++)
    {
        printf("Enter number %d ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Entered numbers are:\n");
    
    for(int i=0; i<10;i++)
    {
        sum = sum+a[i];
    }
    printf("Sum of all elements is  : %d",sum);
}