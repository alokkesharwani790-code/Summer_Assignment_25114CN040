#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int choice;
    printf("Enter String : ");
    scanf("%s",str);
    printf("1.Length\n2.Reverse\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Length = %d",strlen(str));
            break;
        case 2:
            strrev(str);
            printf("Reverse = %s",str);
            break;
    }
    return 0;
}