#include<stdio.h>
int armstrong(int n)
{
    int sum=0,temp=n,digit;
    while(temp>0)
    {
        digit=temp%10;
        sum+=digit*digit*digit;
        temp=temp/10;
    }
    return sum==n;
}
int main()
{
    int n;
    printf("Enter no to check Armstrong : ");
    scanf("%d",&n);
    if(armstrong(n))
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}