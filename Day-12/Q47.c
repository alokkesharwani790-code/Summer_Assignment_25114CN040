#include<stdio.h>
void fibonacci(int n)
{
    int a=0,b=1,c,i;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    printf("Enter no to find Fibonacci series : ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}