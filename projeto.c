#include <stdio.h>
int main()
{
    int number; // Declare an integer variable for the first number.
    int number2; // Declare an integer variable for the second number.
    char choice; // Declare a character variable for the operation choice.

    printf("Enter a number: \n"); // Prompt the user to enter a number.
    scanf("%d", &number); // Read the first number entered by the user.

    printf("Enter a second number: \n"); // Prompt the user to enter a second number.
    scanf("%d", &number2); // Read the second number entered by the user.

    printf("Enter the operation you want (+, -, *, /): \n"); // Prompt the user to enter an arithmetic operation.
    scanf(" %c", &choice); // Read the operation choice entered by the user.

    if (choice == '+') {
        printf("The result is: %d\n", number + number2); // Add the two numbers and print the result.
    } else if (choice == '-') {
        printf("The result is: %d\n", number - number2); // Subtract the second number from the first and print the result.
    } else if (choice == '*') {
        printf("The result is: %d\n", number * number2); // Multiply the two numbers and print the result.
    } else if (choice == '/') {
        printf("The result is: %d\n", number / number2); // Divide the first number by the second and print the result.
    }

    return 0;
}
