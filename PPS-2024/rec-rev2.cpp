#include <stdio.h>

// Recursive function to reverse a number
int reverseNumber(int num, int rev) {
    if (num == 0)
        return rev; // Base case: return the reversed number
    return reverseNumber(num / 10, rev * 10 + num % 10); // Recursive step
}

int main() {
    int num, reversed;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Reversed number: -%d\n", reverseNumber(-num, 0)); // Handle negative numbers
    } else {
        reversed = reverseNumber(num, 0);
        printf("Reversed number: %d\n", reversed);
    }
    
    return 0;
}
