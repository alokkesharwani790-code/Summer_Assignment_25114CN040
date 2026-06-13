#include<stdio.h>
int main()
{
    int n1,n2,i,j,found,a1[100],a2[100];
    printf("Enter size of First array : ");
    scanf("%d",&n1);
    printf("Enter elements of First array :\n");
    for(i=0;i<n1;i++)
        scanf("%d",&a1[i]);
    printf("Enter size of Second array : ");
    scanf("%d",&n2);
    printf("Enter elements of Second array :\n");
    for(i=0;i<n2;i++)
        scanf("%d",&a2[i]);
    printf("Common Elements :\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a1[i]==a2[j])
            {
                printf("%d ",a1[i]);
                break;
            }
        }
    }
    return 0;
}