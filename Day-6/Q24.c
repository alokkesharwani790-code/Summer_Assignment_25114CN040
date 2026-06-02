#include<stdio.h>
int main()
{
    int x,n,i,r=1;
    printf("Enter base number whose power to find : ");
    scanf("%d",&x);
    printf("Enter the power number up to find : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=r*x;
    }
    printf("%d",r);
}