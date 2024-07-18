#include <iostream>
using namespace std;

int main() {
    string full_name, course;
    int score;

    cout << "Enter student's full name: ";
    cin.ignore();
    getline(cin, full_name);
    cout << "Enter course: ";
    getline(cin, course);
    cout << "Enter score: ";
    cin >> score;

    switch(score / 10) {
        case 10:
        case 9:
        case 8:
        case 7:
            cout << full_name << " has a grade of A." << endl;
            break;
        case 6:
            cout << full_name << " has a grade of B." << endl;
            break;
        case 5:
            cout << full_name << " has a grade of C." << endl;
            break;
        case 4:
            cout << full_name << " has a grade of D." << endl;
            break;
        default:
            if (score < 40 && score >= 0) {
                cout << full_name << " has a grade of F." << endl;
            } else {
                cout << "Invalid score." << endl;
            }
            break;
    }

    return 0;
}