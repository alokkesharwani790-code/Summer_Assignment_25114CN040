#include<stdio.h>
int main()
{
    int a[100],n,i,j,duplicate;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter element of array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array after Removing Duplicates :\n");
    for(i=0;i<n;i++)
    {
        duplicate=0;
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                duplicate=1;
                break;
            }
        }
        if(duplicate==0)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}