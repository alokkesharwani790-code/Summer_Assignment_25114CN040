#include<stdio.h>
int main()
{
    char book[3][30];
    int i;
    printf("Enter 3 Book Names :\n");
    for(i=0;i<3;i++)
        scanf("%s",book[i]);
    printf("\nAvailable Books:\n");
    for(i=0;i<3;i++)
        printf("%s\n",book[i]);
    return 0;
}