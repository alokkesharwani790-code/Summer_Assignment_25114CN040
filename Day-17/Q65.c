#include<stdio.h>
int main()
{
    int a1[100],a2[100],a3[200],i,j,n1,n2;
    printf("Enter size of First array : ");
    scanf("%d",&n1);
    printf("Enter elements of First array :\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("Enter size of Second array : ");
    scanf("%d",&n2);
    printf("Enter elements of second array :\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&a2[i]);
    }
    for(i=0;i<n1;i++)
        a3[i]=a1[i];
    for(j=0;j<n2;j++)
        a3[i+j]=a2[j];
    printf("Merged Array :\n");
    for(i=0;i<n1+n2;i++)
        printf("%d ",a3[i]);
    return 0;
}