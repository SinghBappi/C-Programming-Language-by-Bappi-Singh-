#include <stdio.h>
#include <string.h>
#define MAX_ACCOUNTS 100  // Maximum accounts limit define kar rahe hain

// Account details store karne ke liye ek structure define karte hain
struct Acc {
    int accNo;         // Account number
    char name[50];     // Account holder ka naam
    float balance;     // Account ka balance
};

// Accounts store karne ke liye global array banate hain
struct Acc accounts[MAX_ACCOUNTS];
int accCount = 0;  // Total accounts ka count

// Function prototypes - yeh functions baad mein define honge
void createAcc();
void displayAcc();
void deposit();
void withdraw();
void menu();

int main() {
    menu();  // Program start hone par menu function call ho raha hai
    return 0;
}

// Menu ko display karne ka function
void menu() {
    int choice;  // User ka choice store karne ke liye variable

    do {
        printf("\n--- Bank Management System ---\n");
        printf("1. Create Account\n");
        printf("2. Display Account\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // User ke choice ke basis par specific function call karte hain
        switch (choice) {
            case 1: createAcc(); break;  // Account create karne ka function
            case 2: displayAcc(); break;  // Account details display karne ka function
            case 3: deposit(); break;     // Deposit function call karte hain
            case 4: withdraw(); break;    // Withdraw function call karte hain
            case 5: printf("Exiting the program. Thank you!\n"); break;  // Program ko exit karte hain
            default: printf("Invalid choice! Please enter a valid option.\n");  // Agar galat choice ho toh error message
        }
    } while (choice != 5);  // Jab tak user exit nahi karta tab tak menu repeat hota hai
}

// Naya account create karne ka function
void createAcc() {
    if (accCount < MAX_ACCOUNTS) {  // Check karte hain ki maximum limit cross toh nahi hui
        struct Acc newAcc;  // Temporary account structure banate hain

        printf("Enter Account Number: ");
        scanf("%d", &newAcc.accNo);  // Account number input lete hain
        printf("Enter Account Holder Name: ");
        scanf(" %[^\n]", newAcc.name);  // Account holder ka naam input lete hain

        newAcc.balance = 0.0;  // Initial balance ko zero set karte hain

        accounts[accCount] = newAcc;  // Naya account global array mein store karte hain
        accCount++;  // Total accounts ka count increase karte hain
        printf("Account created successfully!\n");
    } else {
        printf("Maximum account limit reached!\n");  // Agar limit cross ho gayi toh error message dikhate hain
    }
}

// Account details display karne ka function
void displayAcc() {
    int accNo, found = 0;  // Account number aur found flag

    printf("Enter Account Number to display: ");
    scanf("%d", &accNo);  // User se account number input lete hain

    for (int i = 0; i < accCount; i++) {  // Array mein search karte hain
        if (accounts[i].accNo == accNo) {  // Agar account milta hai toh details print karte hain
            printf("Account Number: %d\n", accounts[i].accNo);
            printf("Account Holder Name: %s\n", accounts[i].name);
            printf("Current Balance: %.2f\n", accounts[i].balance);
            found = 1;  // Account mil gaya
            break;
        }
    }

    if (!found) {  // Agar account nahi milta toh error message dikhate hain
        printf("Account not found!\n");
    }
}

// Deposit function - paisa deposit karne ke liye
void deposit() {
    int accNo, found = 0;  // Account number aur found flag
    float amt;  // Deposit amount

    printf("Enter Account Number to deposit money: ");
    scanf("%d", &accNo);  // Account number input lete hain
    printf("Enter amount to deposit: ");
    scanf("%f", &amt);  // Deposit amount input lete hain

    for (int i = 0; i < accCount; i++) {  // Array mein search karte hain
        if (accounts[i].accNo == accNo) {  // Agar account milta hai toh balance update karte hain
            accounts[i].balance += amt;  // Balance mein amount add karte hain
            printf("Amount deposited successfully! New balance: %.2f\n", accounts[i].balance);
            found = 1;  // Account mil gaya
            break;
        }
    }

    if (!found) {  // Agar account nahi milta toh error message dikhate hain
        printf("Account not found!\n");
    }
}

// Withdraw function - paisa nikalne ke liye
void withdraw() {
    int accNo, found = 0;  // Account number aur found flag
    float amt;  // Withdraw amount

    printf("Enter Account Number to withdraw money: ");
    scanf("%d", &accNo);  // Account number input lete hain
    printf("Enter amount to withdraw: ");
    scanf("%f", &amt);  // Withdraw amount input lete hain

    for (int i = 0; i < accCount; i++) {  // Array mein search karte hain
        if (accounts[i].accNo == accNo) {  // Agar account milta hai
            if (accounts[i].balance >= amt) {  // Check karte hain balance sufficient hai ya nahi
                accounts[i].balance -= amt;  // Balance mein se amount minus karte hain
                printf("Amount withdrawn successfully! New balance: %.2f\n", accounts[i].balance);
            } else {
                printf("Insufficient balance!\n");  // Agar balance kam hai toh error message
            }
            found = 1;  // Account mil gaya
            break;
        }
    }

    if (!found) {  // Agar account nahi milta toh error message dikhate hain
        printf("Account not found!\n");
    }
}
