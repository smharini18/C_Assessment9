#include <stdio.h>
int main()
{
    int num[5],x,count, y;
    printf("Enter the 5 Numbers : ");
    for(x=0;x<5;x++)
    {
        scanf("%d",&num[x]);
    }
    printf("\nThe Original Number : ");
    for(x=0;x<5;x++)
    {
        printf("%d",num[x]);
    }
    printf("\nAfter Removing Prime Numbers : ");
    for(x=0;x<5;x++)
    {
        count=0;
        for(y=1;y<=num[x];y++)
        {
            if(num[x]%y==0)
            {
                count=count+1;
            }
        }
        if(count!=2)
        {
            printf("%d",num[x]);
        }
    }
    return 0;
}
