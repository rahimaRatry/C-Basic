#include<stdio.h>
#include<math.h>
int main()
{
    float side,area;
    printf("Enter side of an equilateral triangle:\n");
    scanf("%f",&side);
    area = (sqrt(3)/4)*(side*side);
    printf("Area of Equilateral Triangle:%.2f sq.units\n",area);
    return 0;
}
