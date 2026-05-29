#include<stdio.h>
int main()
{
    int dummy,n,rev=0,x;
    printf("enter a number\n");
    scanf("%d",&n);
    while(n>0)
    {
        x=n%10;
        rev=rev*10+x;
        n=n/10;
    }
    printf("Reverse of%d is %d\n",dummy,rev);
}