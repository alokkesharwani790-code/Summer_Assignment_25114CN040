#include<stdio.h>
int main()
{
    int i,j,n,r,fact=1,sum=0,p;
    printf("Enter number to check it is strong or not : ");
    scanf("%d",&n);
    p=n;
    while(n!=0)
    {
        r=n%10;
        fact=1;
        for(j=1;j<=r;j++)
        {
            fact=fact*j;
        }
        sum=sum+fact;
        n=n/10;
    }
    printf("%d\n",sum);
    if(sum==p)
       printf("%d is strong number",p);
    else
       printf("%d is not a strong number",p);
}