#include<stdio.h>
int main()
{
    int i,n,j,space;
    printf("Enter the no of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(space=1;space<i;space++)
        {
            printf(" ");
        }
        for(j=n;j>=2*i-1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}