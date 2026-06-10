#include<stdio.h>
int main()
{
    int i,n,a[100],ele,loc=-1;
    printf("Enter size of array :");
    scanf("%d",&n);
    printf("Enter array elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to find : ");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            loc=i+1;
            break;
        }
    }
    if(loc==-1)
    printf("Element not found");

    else
    printf("Element found at %dth location",loc);
    return 0;
}