#include<stdio.h>
int main()
{
    int num1[50], num2[50], carry, temp, total, result[51],j;
    printf("Enter the First 50 digit Number : ");
    for(j=0;j<50;j++)
    {
        scanf("%d",&num1[j]);
    }
    printf("\nEnter the Second 50 digit Number : ");
    for(j=0;j<50;j++)
    {
        scanf("%d",&num2[j]);
    }
    carry=0;
    for(j=49;j>=0;j--)
    {
        total=num1[j]+num2[j]+carry;
        result[j+1]=total%10;
        carry=total/10;
    }
    result[0]=carry;
    printf("\nResult : ");
    for(j=0;j<51;j++)
    {
        printf("%d",result[j]);
    }
    return 0;
}
