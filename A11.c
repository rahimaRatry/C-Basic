#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two angles of triangle:\n");
    scanf("%d%d",&a,&b);
    c = 180-(a+b);
    printf("Third angle of triangle = %d\n",c);
    return 0;
}
