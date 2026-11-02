#include <stdio.h> // Standard input-output library

int main() {
    // Variable declarations
    int userNumber;
    int fixedNumber = 10;
    int sum;

    // Prompt the user for input
    printf("Enter an integer: ");
    
    // Read the integer from the keyboard
    scanf("%d", &userNumber);

    // Perform addition
    sum = userNumber + fixedNumber;

    // Display the result
    printf("You entered: %d\n", userNumber);
    printf("%d + %d = %d\n", userNumber, fixedNumber, sum);

    return 0; // Indicate successful execution
}
