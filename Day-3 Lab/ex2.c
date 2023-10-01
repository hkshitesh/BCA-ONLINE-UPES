#include<stdio.h>
#include<string.h>
int main()
{
    char str1[12]= "Hello";
    char str2[12] = "World";
    char str3[12];
    printf("\nString 1 is :%s",str1);
    printf("\nString 2 is :%s",str2);
    strcpy(str3,str1);
    printf("\nString 3 is :%s",str3);
    strcat(str1,str2);
    printf("\nString 1 is :%s",str1);
    int l1;
    int l2;
    int l3;
    l1=strlen(str1);
    l2=strlen(str2);
    l3=strlen(str3);
    printf("\nLength of str1 is :%d  \nStr 2 is : %d \nStr 3 is : %d",l1,l2,l3);  

    return 0;
}