#include<stdio.h>
int main()
{
    int num[1000],j;
    printf("Enter the Number : ");
    j=0;
    while(1)
    {
        scanf("%d",&num[j]);
        if(num[j]==0)
        {
            break;
        }
        j++;
    }
    if(j==4 && num[0]==num[3])
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
}
