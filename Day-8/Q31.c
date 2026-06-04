#include<stdio.h>
int main()
{
    int i,n,j,k;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=65;
        for(j=1;j<=i;j++)
        {
            printf("%c",k);
            k++;
        }
        printf("\n");
    }
}