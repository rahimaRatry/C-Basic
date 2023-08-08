#include<stdio.h>
int main()
{
    float P,T,R,simple_interest,compound_interest;
    scanf("%f%f%f",&P,&T,&R);
    simple_interest = P*T*R/100;
    compound_interest = P*((1+R/100)*(T-1));
    printf("Simple Interest= %f\n",simple_interest);
    printf("Compound Interest=%f\n",compound_interest);
    return 0;
}
