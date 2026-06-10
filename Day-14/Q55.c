#include<stdio.h>
int main()
{
    int i,n,a[100],largest,secondlargest;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter array elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=secondlargest=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            secondlargest=largest;
            largest=a[i];
        }
        else if(a[i]>secondlargest && a[i]!=largest)
            secondlargest=a[i];
    }
    printf("Second Largest Element = %d",secondlargest);
    return 0;
}