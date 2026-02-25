#include <stdio.h>

long long factorial(int n) {
    long long result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("factorial of %d is %lld\n", i, factorial(i));
    }

    return 0;
}