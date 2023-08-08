#include<stdio.h>
//Perimeter & Area of a Rectangle.
int main()
{
    int l,b,Perimeter,Area;
    scanf("%d %d",&l,&b);
    Perimeter = (2*l + 2*b);
    printf("Perimeter = %d\n",Perimeter);
    Area = l*b;
    printf("Area = %d\n",Area);
    return 0;
}
