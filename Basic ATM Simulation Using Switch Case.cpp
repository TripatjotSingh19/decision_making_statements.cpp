//Tripatjot Singh
// 24070123044 ENTC A2

#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 1000.0;  // Starting balance
    double amount;

    cout << "Welcome to Simple ATM 💳\n";
    cout << "--------------------------\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Exit\n";

    cout << "\nEnter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Your current balance is ₹" << balance << endl;
            break;
        case 2:
            cout << "Enter amount to deposit: ₹";
            cin >> amount;
            balance += amount;
            cout << "New balance is ₹" << balance << endl;
            break;
        case 3:
            cout << "Enter amount to withdraw: ₹";
            cin >> amount;
            if (amount <= balance) {
                balance -= amount;
                cout << "Please collect your cash.\n";
                cout << "Remaining balance: ₹" << balance << endl;
            } else {
                cout << "Insufficient funds.\n";
            }
            break;
        case 4:
            cout << "Thank you for using Simple ATM. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
    }

    return 0;
}

/* output 

Welcome to Simple ATM 💳
--------------------------
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit

Enter your choice (1-4): 1
Your current balance is ₹1000

*/
