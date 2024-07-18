#include <iostream>
using namespace std;

int main() {
    double account_balance = 1000.0;
    double daily_limit = 500.0;
    double withdrawal_amount;
    
    cout << "Enter the amount to withdraw: ";
    cin >> withdrawal_amount;

    if(withdrawal_amount > account_balance) {
        cout << "Insufficient funds." << endl;
    } else if(withdrawal_amount > daily_limit) {
        cout << "Withdrawal amount exceeds daily limit." << endl;
    } else {
        account_balance -= withdrawal_amount;
        cout << "Withdrawal successful. Remaining balance: $" << account_balance << endl;
    }

    return 0;
}