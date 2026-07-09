#include<stdio.h>
int main()
{
    int num[1000],j, total=0;
    printf("Enter the Number : ");
    j=0;
    while(1)
    {
        scanf("%d",&num[j]);
        if(num[j]==0)
        {
            break;
        }
        total = total + num[j];
        j++;
    }
    printf("\nTotal Numbers entered : %d",j);
    printf("\nSum of Numbers : %d ",total);
}
