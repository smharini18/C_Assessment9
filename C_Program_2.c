#include<stdio.h>
int main()
{
    int arr[5];
    int total;
    float avg;

    printf("Enter the 5 Numbers : ");
    scanf("%d",&arr[0]);
    scanf("%d",&arr[1]);
    scanf("%d",&arr[2]);
    scanf("%d",&arr[3]);
    scanf("%d",&arr[4]);

    total = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
    avg = total / 5.0;

    printf("Average = %.2f", avg);
}
