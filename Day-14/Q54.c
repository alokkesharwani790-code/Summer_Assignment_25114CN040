#include<stdio.h>
int main()
{
    int i,n,key,count=0,a[100];
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter array elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter elements to find frequency : ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
            count++;
    }
    printf("Frequency of %d = %d",key,count);
    return 0;
}
