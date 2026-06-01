#include<stdio.h>
int main()
{
    int i,n,m,c,j;
    printf("Enter number to find largest prime factor : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }    
            if(c==2)
            {
                if(m<i)
                {
                    m=i;
                }
                printf("all the primr factor are %d\n",i);
            }
        }
    }
    printf("The largest prime factor of %d is %d",n,m);
}