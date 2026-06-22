#include<stdio.h>
int main()
{
    int choice;
    float balance=10000,amount;
    while(1)
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit MOney\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("Current Balance = %.2f\n",balance);
            break;
            case 2:
            printf("Enter Amount to Deposit : ");
            scanf("%f",&amount);
            if(amount>0)
            {
                balance+=amount;
                printf("Deposit Successful\n");
                printf("Updated Balance = %.2f\n",balance);
            }
            else{
                printf("Invalid Amount\n");
            }break;
            case 3:
            printf("Enter Amount to Withdraw : ");
            scanf("%f",&amount);
            if(amount>balance){
                printf("Insufficient Balance\n");
            }
            else if(amount<=0){
                printf("Invalid Amount\n");
            }
            else{
                balance-=amount;
                printf("Withdrawl Successful\n");
                printf("Remaining Balance = %.2f\n",balance);
            }break;
            case 4:
            printf("Thankyou for using ATM !\n");
            return 0;
            default :
                printf("Invalid choice\n");
        }
    }
    return 0;
}