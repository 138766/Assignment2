#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    const double PI = 3.14159;
    
    cout << "Menu:" << endl;
    cout << "1. Calculate the area of a circle" << endl;
    cout << "2. Calculate the area of a rectangle" << endl;
    cout << "3. Calculate the area of a triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            cout << "The area of the circle is: " << PI * radius * radius << endl;
            break;
        }
        case 2: {
            double length, width;
            cout << "Enter the length and width of the rectangle: ";
            cin >> length >> width;
            cout << "The area of the rectangle is: " << length * width << endl;
            break;
        }
        case 3: {
            double base, height;
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            cout << "The area of the triangle is: " << 0.5 * base * height << endl;
            break;
        }
        case 4:
            cout << "Quitting the program." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }

    return 0;
}