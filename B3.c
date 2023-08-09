#include<stdio.h>
int main()
{
    int a;
    printf("Enter year:");
    scanf("%d",&a);
    (a%4==0&a&a%100!=0)?printf("%d is leap year",a):(a%400==0)?
    printf("%d is leap year",a):printf("%d is not leap year",a);
    return 0;
}
