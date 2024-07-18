#include <iostream>
using namespace std;

int main() {
    int days_late;
    string book_type;
    double fine = 0.0;

    cout << "Enter the number of days late: ";
    cin >> days_late;
    cout << "Enter the type of book (regular, children, reference): ";
    cin >> book_type;

    if(book_type == "regular") {
        if(days_late <= 5) {
            fine = days_late * 0.5;
        } else if(days_late <= 10) {
            fine = 5 * 0.5 + (days_late - 5) * 1.0;
        } else {
            fine = 5 * 0.5 + 5 * 1.0 + (days_late - 10) * 1.5;
        }
    } else if(book_type == "children") {
        fine = days_late * 0.25;
    } else if(book_type == "reference") {
        fine = days_late * 2.0;
    } else {
        cout << "Invalid book type." << endl;
    }

    cout << "The fine is: $" << fine << endl;

    return 0;
}