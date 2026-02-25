#include <stdio.h>

int main(void) {
    int i;
    
    long long factorial = 1;

    for (i = 1; i <= 10; i++) {
        factorial *= i;   // N! = (N-1)! * N
        printf("factorial of %d is %lld\n", i, factorial);
    }

    return 0;
}