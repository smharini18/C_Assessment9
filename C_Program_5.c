#include <stdio.h>
int main()
{
    int num[5];
    int x,y,temp;
    printf("Enter the Number : ");
    for(x=0;x<5;x++)
    {
        scanf("%d",&num[x]);
    }
    printf("\nThe Same Number : ");
    for(x=0;x<5;x++)
    {
        printf("%d",num[x]);
    }
    for(x=0;x<5;x++)
    {
        for(y=x+1;y<5;y++)
        {
            if(num[x]>num[y])
            {
                temp=num[x];
                num[x]=num[y];
                num[y]=temp;
            }
        }
    }
    printf("\nAscending order : ");
    for(x=0;x<5;x++)
    {
        printf("%d",num[x]);
    }
}
