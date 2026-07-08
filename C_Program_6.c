#include <stdio.h>
int main()
{
    int arr[5];
    int p,q,t;
    printf("Enter the Number : ");
    for(p=0;p<5;p++)
    {
        scanf("%d",&arr[p]);
    }
    printf("\nThe Same Number : ");
    for(p=0;p<5;p++)
    {
        printf("%d",arr[p]);
    }
    for(p=0;p<5;p++)
    {
        for(q=p+1;q<5;q++)
        {
            if(arr[p]>arr[q])
            {
                t=arr[p];
                arr[p]=arr[q];
                arr[q]=t;
            }
        }
    }
    printf("\nAscending order : ");
    for(p=0;p<5;p++)
    {
        printf("%d",arr[p]);
    }
}
