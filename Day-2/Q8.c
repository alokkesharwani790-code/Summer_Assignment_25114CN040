#include<stdio.h>
int main()
{
    int n,r,rev=0,n1;
    printf("enter a number: ");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==n1)
    {
        printf("Palindrome no");
    }
    else
    printf("Not a Palindrome no");
}