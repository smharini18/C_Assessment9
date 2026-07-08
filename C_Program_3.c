#include <stdio.h>
int main()
{
    int num[5];
    int min,j;
    printf("Enter the 5 number : ");
    for(j=0;j<5;j++)
    {
        scanf("%d",&num[j]);
    }
    min=num[0];
    for(j=1;j<5;j++)
    {
        if(num[j]<min)
        {
            min = num[j];
        }
    }
    printf("Smallest= %d",min);
}
