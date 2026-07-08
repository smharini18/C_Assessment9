#include <stdio.h>
int main()
{
    int num[5];
    int max,j;
    printf("Enter the 5 number : ");
    for(j=0;j<5;j++)
    {
        scanf("%d",&num[j]);
    }
    max=num[0];
    for(j=1;j<5;j++)
    {
        if(num[j]>max)
        {
            max = num[j];
        }
    }
    printf("Biggest = %d",max);
}
