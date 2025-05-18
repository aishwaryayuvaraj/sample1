#include <stdio.h>

int main() {
    int num1, num2, result;

    // Asking for user input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Adding the two numbers
    result = num1 + num2;

    // Displaying the result
    printf("result: %d\n", result);

    return 0;
}
