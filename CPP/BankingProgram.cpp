#include <iostream>
#include <iomanip>
using std::cout, std::cin, std::string;

void line() {
    cout << "\033[1;34m***************************\033[0m\n";  // blue separator
}

void showBalance(double balance) {
    cout << "\033[1;33mYour current balance is: $\033[0m" 
         << std::fixed << std::setprecision(2) << balance << "\n";
}

double deposit(double balance) {
    double amt;
    cout << "Enter amount to deposit: ";
    cin >> amt;
    if (amt <= 0) {
        cout << "\033[1;31mInvalid deposit amount!\033[0m\n";  // red
        return balance;
    }
    cout << "\033[1;32mDeposit successful!\033[0m\n";  // green
    return balance + amt;
}

double withdraw(double balance) {
    double amt;
    cout << "Enter amount to withdraw: ";
    cin >> amt;
    if (amt <= 0) {
        cout << "\033[1;31mInvalid withdrawal amount!\033[0m\n";
        return balance;
    }
    if (amt > balance) {
        cout << "\033[1;31mInsufficient funds!\033[0m\n";
        return balance;
    }
    cout << "\033[1;32mWithdrawal successful!\033[0m\n";
    return balance - amt;
}

void logout() {
    cout << "\033[1;34mThank you for using Bank, Have a great Day\033[0m\n";
    line();
}

int main() {
    int choice;
    double balance = 1000;

    while (true) {
        line();
        cout << "Welcome to the bank!\nWhat would you like to do:\n";
        cout << "1 - Show Balance\n2 - Deposit Money\n3 - Withdraw Money\n4 - Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.clear();
        cin.ignore(1000000, '\n');
        switch (choice) {
            case 1: showBalance(balance); break;
            case 2: balance = deposit(balance); break;
            case 3: balance = withdraw(balance); break;
            case 4: logout(); return 0;
            default: cout << "\033[1;31mEnter a valid choice\033[0m\n"; break;
        }
    }
}
