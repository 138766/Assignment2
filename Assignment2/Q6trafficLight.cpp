#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    int timer = 0;

    while (true) {
        switch(timer % 3) {
            case 0:
                cout << "Red Light" << endl;
                this_thread::sleep_for(chrono::seconds(3));
                break;
            case 1:
                cout << "Green Light" << endl;
                this_thread::sleep_for(chrono::seconds(3));
                break;
            case 2:
                cout << "Yellow Light" << endl;
                this_thread::sleep_for(chrono::seconds(1));
                break;
        }
        timer++;
    }

    return 0;
}