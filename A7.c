#include<stdio.h>
int main()
{
    float fahrenheit,celsius;
    printf("Enter temperature in fahrenheit: \n");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit-32)/1.8;
    printf("Temperature in Celsius: %.2f\n",celsius);
    return 0;
}
