#include <stdio.h>
int main() {
    int option;
    
    printf("ATM Card Menu:\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw Money\n");
    printf("3. Deposit Money\n");
    printf("4. Exit\n");
    
    printf("Enter your choice: ");
    scanf("%d", &option);
    
    switch(option) {
        case 1:
            printf("Your balance is $1000.\n");
            break;
        case 2:
            printf("Money withdrawn successfully.\n");
            break;
        case 3:
            printf("Money deposited successfully.\n");
            break;
        case 4:
            printf("Thank you for using the ATM.\n");
            break;
        default:
            printf("Invalid option. Please try again.\n");
    }
    
    return 0;
}
