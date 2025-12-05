#include <stdio.h>

int main() {
    int type[100];        // Stores type of transaction
    float amount[100];    // Stores amount of each transaction
    int count = 0;        // Number of transactions
    float balance = 0;    // Current balance

    int choice, t;
    float money;

    while (1) {// Infinite loop for menu until user exits
        printf("\n----- BANK MENU -----\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Credit\n");
        printf("4. Debit\n");
        printf("5. Show All Transactions\n");
        printf("6. Show Transactions by Type\n");
        printf("7. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 7) {
            printf("Thank you! Final Balance = %.2f\n", balance);
            break;
        }

        switch (choice) {

        case 1:  // Deposit
        case 3:  // Credit
            printf("Enter amount: ");
            scanf("%f", &money);

            balance += money; //add money to balance
            type[count] = choice; //store transaction type
            amount[count] = money;//store transaction amount
            count++;//increment transaction count

            printf("Transaction Successful! New Balance = %.2f\n", balance);
            break;

        case 2:  // Withdraw
        case 4:  // Debit
            printf("Enter amount: ");
            scanf("%f", &money);

            if (balance >= money) {
                balance -= money;
                type[count] = choice;
                amount[count] = money;
                count++;
                printf("Transaction Successful! New Balance = %.2f\n", balance);
            } else {
                printf("Insufficient Balance!\n");
            }
            break;

        case 5: // Show All Transactions
            printf("\n--- All Transactions ---\n");
            for (int i = 0; i < count; i++) {
                if (type[i] == 1) printf("Deposit: %.2f\n", amount[i]);
                else if (type[i] == 2) printf("Withdraw: %.2f\n", amount[i]);
                else if (type[i] == 3) printf("Credit: %.2f\n", amount[i]);
                else if (type[i] == 4) printf("Debit: %.2f\n", amount[i]);
            }
            break;

        case 6: // Show by Type
            printf("\nEnter type (1=Deposit, 2=Withdraw, 3=Credit, 4=Debit): ");
            scanf("%d", &t);

            printf("\n--- Selected Type Transactions ---\n");
            for (int i = 0; i < count; i++) {
                if (type[i] == t) {
                    if (t == 1) printf("Deposit: %.2f\n", amount[i]);
                    if (t == 2) printf("Withdraw: %.2f\n", amount[i]);
                    if (t == 3) printf("Credit: %.2f\n", amount[i]);
                    if (t == 4) printf("Debit: %.2f\n", amount[i]);
                }
            }
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
