#include<stdio.h>
int main()
{
    float cm,m,km;
    printf("Enter length in cm:");
    scanf("%f",&cm);
    m=cm/100;
    km= cm/100000;
    printf("Length in M = %f m\n",m);
    printf("Length in KM = %f km\n",km);
    return 0;
}
