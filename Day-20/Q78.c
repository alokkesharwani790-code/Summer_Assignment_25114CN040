#include<stdio.h>
int main()
{
    int n,flag=1,i,j,a[10][10];
    printf("Enter order of Matrix : ");
    scanf("%d",&n);
    printf("Enter Matrix :\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=a[j][i])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
        printf("Symmetric Matrix\n");
    else
        printf("Not Symmetric Matrix\n");
    return 0;
}