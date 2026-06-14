#include <stdio.h>
int main()
{
    int a[100],n,key,i,low,high,mid,found=0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter Sorted array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    printf("Enter element to search : ");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low + high)/2;
        if(a[mid]==key)
        {
            printf("Element Found at Position %d",mid+1);
            found=1;
            break;
        }
        else if(a[mid]<key)
        {
            low = mid+1;
        }
        else
            high = mid-1;
    }
    if(found==0)
        printf("Element not Found");
    return 0;
}