#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("Enter temperature in celsius :\n");
    scanf("%f",&celsius);
    fahrenheit = (celsius*1.8)+32;
    printf("Temperature in Fahrenheit is: %.2f\n",fahrenheit);
    return 0;
}
