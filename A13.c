#include<stdio.h>
int main()
{
    int phy,che,math,bio,eng;
    float total,average,percentage;
    printf("Enter the marks of 5 subjects:\n");
    scanf("%d%d%d%d%d",&phy,&che,&math,&bio,&eng);
    total = (phy+che+math+bio+eng);
    average = total/5.0;
    percentage = (total/500.0)*100;
    printf("Total = %f\n",total);
    printf("Average = %f\n",average);
    printf("Percentage = %f\n",percentage);
    return 0;
}
