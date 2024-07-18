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

    if(score >= 70) {
        cout << full_name << " has a grade of A." << endl;
    } else if(score >= 60) {
        cout << full_name << " has a grade of B." << endl;
    } else if(score >= 50) {
        cout << full_name << " has a grade of C." << endl;
    } else if(score >= 40) {
        cout << full_name << " has a grade of D." << endl;
    } else if(score < 40 && score >= 0) {
        cout << full_name << " has a grade of F." << endl;
    } else {
        cout << "Invalid score." << endl;
    }

    return 0;
}