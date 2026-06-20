#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100],temp[200];
    int i,j,count;
    printf("Enter First string : ");
    scanf("%s",str1);
    printf("Enter Second string : ");
    scanf("%s",str2);
    strcpy(temp,str1);
    strcat(temp,str1);    
    if(strstr(temp,str2))
        printf("String is Rotation");
    else
        printf("String is Not Rotation");
    return 0;
}