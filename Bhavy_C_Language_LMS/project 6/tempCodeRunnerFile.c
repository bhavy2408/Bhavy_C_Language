#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int is_palindrome = 1; // Flag to assume the string is a palindrome initially
    int start = 0;
    int end;

    // 1. Get user input
    printf("Enter a string: ");
    // Use scanf to read a single word. Note: gets() is unsafe and deprecated.
    scanf("%s", str); 

    // 2. Calculate the length of the string manually
    while (str[length] != '\0') {
        length++;
    }

    // 3. Use two pointers (start and end) to compare the string
    end = length - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            is_palindrome = 0; // If any characters don't match, set flag to 0
            break; // Exit the loop as it's not a palindrome
        }
        start++; // Move the start pointer forward
        end--;   // Move the end pointer backward
    }

    // 4. Display the result
    if (is_palindrome) {
        printf("%s is a palindrome.\\n", str);
    } else {
        printf("%s is not a palindrome.\\n", str);
    }

    return 0;
}
