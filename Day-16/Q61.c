#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0,expectedsum,missing;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter element of array : ");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    expectedsum=n*(n+1)/2;
    missing=expectedsum-sum;
    printf("Missing Number = %d",missing);
    return 0;
}