#include <iostream>
using namespace std;

int main() {
    double purchase_amount, discount = 0.0, total_cost;

    cout << "Enter the purchase amount: ";
    cin >> purchase_amount;

    if(purchase_amount > 1000) {
        discount = 0.1 * purchase_amount;
    } else if(purchase_amount > 500) {
        discount = 0.05 * purchase_amount;
    } else if(purchase_amount > 100) {
        discount = 0.02 * purchase_amount;
    }

    total_cost = purchase_amount - discount;
    cout << "Total cost after discount: $" << total_cost << endl;

    return 0;
}