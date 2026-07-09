#include<stdio.h>
int main()
{
    int num[5],j;
    printf("Enter the First 50 digit Number : ");
    for(j=0;j<5;j++)
    {
        scanf("%d",&num[j]);
    }
    for(j=4;j>0;j--)
    {
        num[j-1]=num[j-1]+num[j]/10;
        num[j]=num[j]%10;
    }
    printf("\nResult : ");
    for(j=0;j<5;j++)
    {
        printf("%d",num[j]);
    }
    return 0;
}
