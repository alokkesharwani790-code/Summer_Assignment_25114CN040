#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number to check it is perfect or not : ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(sum==n)
      printf("Entered number %d is perfect number\n",n);
    else
      printf("Enterd number %d is not perfect number\n",n);  
}