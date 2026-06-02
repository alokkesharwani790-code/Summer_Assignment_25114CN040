#include<stdio.h>
int main()
{
    int n,n1,r,s=0,base=1;
    printf("Enter the binary no to convert into decimal : ");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        r=n%10;
        s=s+r*base;
        n=n/10;
        base=base*2;
    }
    printf("The Decimal no of Binary (%d) is %d ",n1,s);
}