#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,total;
    float percentage;
    printf("Enter marks of 5 subjects :\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    percentage=total/5.0;
    printf("\n===Marksheet===\n");
    printf("Total = %d\n",total);
    printf("Percentage = %.2f\n",percentage);
    if(percentage>=60)
        printf("Division : First");
    else if(percentage>=45)
        printf("Division : Second");
    else
        printf("Division : Third");
    return 0;
}