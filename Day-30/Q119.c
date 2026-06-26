#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
};
int main()
{
    struct Employee e[2];
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter ID and Name : ");
        scanf("%d%s",&e[i].id,e[i].name);
    }
    printf("\nEmployee Records :\n");
    for(i=0;i<2;i++)
    {
        printf("%d %s\n",e[i].id,e[i].name);
    }
    return 0;
}