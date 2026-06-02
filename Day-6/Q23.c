#include<stdio.h>
int main()
{
    int base=1,n,n1,r,s=0,count=0;
    printf("Enter 'Decimal number' to convert into 'Binary' and to count its no of set Bits : ");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        r=n%2;
        s=s+r*base;
        n=n/2;
        base=base*10;
        if(r==1)
        {
            count++;
        }
    }
    printf("The Binary of Decimal (%d) is %d\n",n1,s);
    printf("The no of set bits are %d ",count);
}