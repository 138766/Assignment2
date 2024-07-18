#include <iostream>
using namespace std;

int main() {
    int age;
    string movie_type;
    double ticket_price = 0.0;

    cout << "Enter age of the customer: ";
    cin >> age;
    cout << "Enter type of movie (regular, 3D): ";
    cin >> movie_type;

    if(movie_type == "regular") {
        if(age < 12) {
            ticket_price = 5.0;
        } else if(age <= 60) {
            ticket_price = 10.0;
        } else {
            ticket_price = 7.0;
        }
    } else if(movie_type == "3D") {
        if(age < 12) {
            ticket_price = 8.0;
        } else if(age <= 60) {
            ticket_price = 15.0;
        } else {
            ticket_price = 10.0;
        }
    } else {
        cout << "Invalid movie type." << endl;
    }

    cout << "The ticket price is: $" << ticket_price << endl;

    return 0;
}