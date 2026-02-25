#include <iostream>
using namespace std;
int y;
int main() {
    cout << "Address of y: " << &y << endl;
    cout << "Address of y again: " << &y << endl;
    int* x;
    x = &y;
    y = 10;
    cout << "Pointer x (address of y): " << x << endl;
    cout << "Dereferenced x (*x): " << *x << endl;
    y = 20;
    cout << "Pointer x after y change: " << x << endl;
    cout << "Dereferenced x after y change: " << *x << endl;
    return 0;
}