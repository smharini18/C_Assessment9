#include<stdio.h>
int main()
{
    int num[1000],x,y,sum,count,temp,result[1000],swap,digit=0,rem;
    float avg;
    printf("Enter the Number : ");
    x=0;
    while(1)
    {
        scanf("%d",&num[x]);
        if(num[x]==0)
        {
            break;
        }
        x++;
    }
    count=x;
    for(x=0;x<count;x++)
    {
        sum=num[x];
        digit=0;
        while(sum!=0)
        {
            rem=sum%10;
            digit=digit+rem;
            sum=sum/10;
        }
        result[x]=digit;
    }
    for(x=0;x<count-1;x++)
    {
        for(y=x+1;y<count;y++)
        {
            if(result[x]>result[y])
            {
                swap=result[x];
                result[x]=result[y];
                result[y]=swap;
            }
        }
    }
    printf("\nAscending order : ");
    for(x=0;x<count;x++)
    {
        printf("%d ",result[x]);
    }
}
