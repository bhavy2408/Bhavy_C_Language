#include <stdio.h>

int main() {
    int x, y;

    // --- Post-increment (y = x++) ---
    // The current value of x is assigned to y first, then x is incremented.
    x = 10;
    y = x++; 

    printf("--- Post-increment (y = x++) ---\n");
    printf("Initial x = 10\n");
    printf("Value of y after y = x++: %d\n", y); // y gets the original value of x
    printf("Value of x after y = x++: %d\n\n", x); // x gets incremented after assignment


    // --- Pre-increment (++y = x) ---
    // x is incremented first, and then the new value is assigned to y.
    x = 10;
    y = ++x;

    printf("--- Pre-increment (y = ++x) ---\n");
    printf("Initial x = 10\n");
    printf("Value of y after y = ++x: %d\n", y); // y gets the new, incremented value of x
    printf("Value of x after y = ++x: %d\n\n", x); // x is already incremented

    return 0;
}
