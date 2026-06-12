#include<stdio.h>
int main()
{
    int a[100],n,i,j,maxfreq=0,element;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter element of array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count>maxfreq)
        {
            maxfreq=count;
            element=a[i];
        }
    }
    printf("Element with Maximum Frequency = %d",element);
    printf("\nFrequency = %d",maxfreq);
    return 0;
}    