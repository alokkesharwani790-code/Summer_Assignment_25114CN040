#include<stdio.h>
int main()
{
    int n,i,a[100];
    printf("Enter size of Array : ");
    scanf("%d",&n);
    printf("Enter array elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements are : \n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}