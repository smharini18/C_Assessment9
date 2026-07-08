#include<stdio.h>
int main()
{
    int num[5];
    int sum;  
    printf("Enter the 5 Numbers : ");
    scanf("%d",&num[0]);
    scanf("%d",&num[1]);
    scanf("%d",&num[2]);
    scanf("%d",&num[3]);
    scanf("%d",&num[4]);
    sum = num[0] + num[1] + num[2] + num[3] + num[4];    
    printf("sum = %d", sum);
}
