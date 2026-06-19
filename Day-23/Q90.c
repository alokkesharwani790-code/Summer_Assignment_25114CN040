#include<stdio.h>
int main()
{
    char str[100];
    int i,j,count;
    printf("Enter a string : ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        count=0;
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                printf("First Repeating character = %c",str[i]);
                return 0;
            }
        }
    }
    printf("No Repeating character");
    return 0;
}