#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    switch (num) {

        case 0:
        case 2:
        case 4:
        case 6:
        case 8:
            cout << num * num << endl;
            break;

        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            cout << num / 2 << endl;
            break;

        default:
            cout << "hahaha" << endl;
            break;
    }

    return 0;
}
