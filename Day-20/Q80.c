#include<stdio.h>
int main()
{
    int r,col,i,j,sum,a[10][10];
    printf("Enter rows and columns : ");
    scanf("%d%d",&r,&col);
    printf("Enter Matrix :\n");
    for(i=0;i<r;i++){
        for(j=0;j<col;j++)
            scanf("%d",&a[i][j]);
    }
    for(j=0;j<col;j++)
    {
        sum=0;
        for(i=0;i<r;i++)
            sum=sum+a[i][j];
        printf("Sum of Column %d = %d\n",j+1,sum);
    }
    return 0;
}