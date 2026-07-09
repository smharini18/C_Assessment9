#include<stdio.h>
int main()
{
    int num[1000],j,pos, mid1, mid2, mid3;
    float avg;
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
    if(j%2==1)
    {
        pos=j/2;
        mid1=num[pos];
        printf("Middle Number = %d",mid1);
    }
    else
    {
        pos=j/2;
        mid1=num[pos-1];
        mid2=num[pos];
        avg=(mid1+mid2)/2.0;
        printf("Average = %.2f",avg);
    }
}
