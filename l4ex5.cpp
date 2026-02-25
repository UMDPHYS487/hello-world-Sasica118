#include <iostream>
using namespace std;

long long factorial(int n) {
    long long result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int N;

    cout << "Enter an integer value: ";
    cin >> N;

    cout << "The value you entered is " << N
         << " and its factorial is " << factorial(N) << endl;

    return 0;
}