#include<stdio.h>
//Diameter,Circumference & Area of a circle.
int main()
{
    float radious,Diameter,Circumference,Area;
    scanf("%f",&radious);
    Diameter = 2*radious;
    printf("Diameter = %f\n",Diameter);
    Circumference = 2*3.1416*radious;
    printf("Circumference = %f\n",Circumference);
    Area = 3.1416*radious*radious;
    printf("Area = %f\n",Area);
    return 0;
}
