//Linear search.
#include<stdio.h>
int main()
{
    int num[]={12,13,17,34,25,28};
    int value, pos=-1, i;

    printf("Enter the value you want to search: ");
    scanf("%d",&value);

    for(i=0; i<7; i++)
    {
        if(value== num[i]);
        {
            pos= i+1;
            break;
        }
        if(pos== -1)
        printf("The item is not found");
        else

        printf("The value is found at position %d\n", pos);
    }
}
