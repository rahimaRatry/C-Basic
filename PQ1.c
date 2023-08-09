#include<stdio.h>
//area of a square(side is given).
int main()
{
    int side,area;
    printf("Enter side:");
    scanf("%d",&side);

    area = side*side;
    printf("Area is:%d\n",area);
    return 0;
}
