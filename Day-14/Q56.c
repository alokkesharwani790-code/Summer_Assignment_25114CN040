#include<stdio.h>
int main()
{
    int i,n,j,a[100];
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter array element :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Duplicate elements are :\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d\n",a[i]);
                break;
            }
        }
    }
    return 0;
}