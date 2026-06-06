#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,space;
    printf("Enter the no of Rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(space=i;space<n;space++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}