#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number:\n");
    scanf("%d",&x);
    (x%2==0)?printf("%d is even number",x):printf("%d is odd number",x);
    return 0;
}
