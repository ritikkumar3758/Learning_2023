#include <stdio.h>

// Function using if-else
int findMaxIfElse(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

// Function using ternary operator
int findMaxTernary(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Using if-else
    int maxIfElse = findMaxIfElse(num1, num2);
    printf("Using if-else: The maximum number is %d\n", maxIfElse);
    
    // Using ternary operator
    int maxTernary = findMaxTernary(num1, num2);
    printf("Using ternary operator: The maximum number is %d\n", maxTernary);
    
    return 0;
}
