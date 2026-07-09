#include <stdio.h>
int main()
{
    int num[5],x,rev,sum=0,digit,temp,value;
    printf("Enter the 5 Numbers : ");
    for(x=0;x<5;x++)
    {
        scanf("%d",&num[x]);
    }
    printf("\nThe Reverse Number : ");
    for(x=0;x<5;x++)
    {
        temp=num[x];
        rev=0;
        while(temp!=0)
        {
            digit=temp%10;
            rev=rev*10+digit;
            temp=temp/10;
        }
        value=rev;
        sum=sum+value;
        printf("%d ",rev);
    }
    printf("\nThe sum Of Numbers : %d ",sum);
}
