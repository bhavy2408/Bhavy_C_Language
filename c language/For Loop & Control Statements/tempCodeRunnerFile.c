#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the upper limit N: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are: ", n);

    // Outer loop iterates from 2 to N
    for (i = 2; i <= n; i++) {
        // Assume the current number is prime
        isPrime = 1;

        // Inner loop checks for divisibility from 2 to half of the current number
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                // If divisible, it's not prime, so set flag to 0 and break the inner loop
                isPrime = 0;
                break;
            }
        }

        // If the number is prime (isPrime is 1) and not 1, print it
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    printf("\\n"); // Print a newline at the end
    return 0;
}
