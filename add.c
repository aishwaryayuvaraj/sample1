#include <stdio.h>

int main() {
    int num1, num2, r;

    // Asking for user input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Adding the two numbers
    r = num1 + num2;

    // Displaying the result
    printf("result: %d\n", r);

    return 0;
}
