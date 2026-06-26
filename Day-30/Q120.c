#include<stdio.h>
void display(int marks[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",marks[i]);
}
int main()
{
    char name[30];
    int marks[5],i;
    printf("Enter Student Name : ");
    scanf("%s",name);
    printf("Enter 5 Marks:\n");
    for(i=0;i<5;i++)
        scanf("%d",&marks[i]);
    printf("\nStudent Name : %s\n",name);
    printf("Marks : ");
    display(marks,5);
    return 0;
}