#include<stdio.h>
int main()
{
    int answer,score=0;
    printf("====== QUIZ APPLICATION =====\n");
    printf("\nQ1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Chennai\n4. Kolkata\n");
    printf("Enter Answer: ");
    scanf("%d",&answer);
    if(answer==1)
        score++;

    printf("\nQ2. Which language is known as the mother of C?\n");
    printf("1. Java\n2. B\n3. Python\n4. C++\n");
    printf("Enter Answer: ");
    scanf("%d",&answer);
    if(answer == 2)
        score++;

    printf("\nQ3. 9+6 = ?\n");
    printf("1. 10\n2. 11\n3. 15\n4. 13\n");
    printf("Enter Answer: ");
    scanf("%d", &answer);
    if(answer==3)
        score++;

    printf("\nQ4. Who developed C language?\n");
    printf("1. Robert Hook\n2. Dennis Ritchie\n3. Guido van Rossum\n4. Virat Kohli\n");
    printf("Enter Answer: ");
    scanf("%d",&answer);
    if(answer==2)
        score++;

    printf("\nQ5. How many bits are there in 1 byte?\n");
    printf("1. 4\n2. 8\n3. 16\n4. 32\n");
    printf("Enter Answer: ");
    scanf("%d", &answer);
    if(answer==2)
        score++;

    printf("\n==== RESULT =====\n");
    printf("Your Score = %d/5\n",score);
    if(score==5)
        printf("Excellent!\n");
    else if(score>=3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");
    return 0;
}