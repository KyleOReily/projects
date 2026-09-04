#include<stdio.h>
int main(){
    int choice;
    int balance,deposit,withdraw;
    balance=10000;
    printf("------ATM MENU------\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        printf("Your Balance: Rs.10,000\n");
        break;
    case 2:
        printf("Enter deposit amount:");
        scanf("%d",&deposit);
        printf("Your Balance = Rs.%d\n",balance+deposit);
        break;
    case 3:
        printf("Enter amount:");
        scanf("%d",&withdraw);
        if(withdraw<balance){
            printf("Your Balance = Rs.%d\n",balance-withdraw);
        }
        else{
            printf("Insufficient amount\n");
        }

        break;
    case 4:
        printf("Thankyou for using ATM");
    default:
        printf("Invalid choice");
        break;
    }
       if(choice!=4){
        printf("Thankyou");
       }

    return 0;
}

