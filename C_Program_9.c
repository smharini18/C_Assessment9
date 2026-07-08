#include<stdio.h>
int main()
{
    int num[5],j;
    printf("Enter the Number : ");
    for(j=0;j<5;j++)
    {
        scanf("%d",&num[j]);
    }
    
    printf("\nThe Same Number : ");
    for(j=0;j<5;j++)
    {
        printf("%d",num[j]);
    }
    printf("\nAfter Removing Even Number : ");
    for(j=0;j<5;j++)
    {
        if(num[j]%2==1)
        {
            printf("%d",num[j]);
        }
    }
}
