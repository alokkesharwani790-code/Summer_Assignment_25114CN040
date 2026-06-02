#include<stdio.h>
int main()
{
    int base=1,n,n1,r,s=0;
    printf("Enter 'Decimal number' to convert into 'Binary' : ");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        r=n%2;
        s=s+r*base;
        n=n/2;
        base=base*10;
    }
    printf("The Binary of Decimal (%d) is %d ",n1,s);
}
