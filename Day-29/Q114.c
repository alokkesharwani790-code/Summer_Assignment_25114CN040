#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0;
    int choice;
    printf("Enter size : ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\n1.Display\n2.Sum\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            for(i=0;i<n;i++)
                printf("%d ",arr[i]);
            break;
        case 2:
            for(i=0;i<n;i++)
                sum=sum+arr[i];
            printf("Sum = %d",sum);
            break;
    }
    return 0;
}