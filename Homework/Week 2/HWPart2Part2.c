#include <stdio.h>

// Initializations of the functions.
void add(double a, double b);
void subtract(double a, double b);
void multiply(double a, double b);
void divide(double a, double b);

int main() {
    // using pointers for eahc of the 
    void (*operations[4])(double, double) = {add, subtract, multiply, divide};

    int choice;
    double num1, num2;
    
    while(1){
        // scans information in for the calculator.
        printf("Select an operation:\n");
        printf("1. Add, 2. Subtract, 3. Multiply, 4. Divide.\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        printf("First number: ");
        scanf("%lf", &num1);
        printf("Second number: ");
        scanf("%lf", &num2);

        //does the calculation if the input choice is valid.
        if (choice >= 1 && choice <= 4) {
            operations[choice - 1](num1, num2);
        } else {
            printf("Invalid choice\n");
        }
        printf("\n\n\n");
    }
    return 0;
}

// functions for each of the mathematical operations.
void add(double num1, double num2) {
    double result = num1 + num2;
    printf("Addition: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
}

void subtract(double num1, double num2) {
    double result = num1 - num2;
    printf("Subtraction: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
}

void multiply(double num1, double num2) {
    double result = num1 * num2;
    printf("Multiplication: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
}

void divide(double num1, double num2) {
    if (num2 != 0) {
        double result = num1 / num2;
        printf("Division: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
    } else {
        printf("You cant break my code like that... Try again.\n");
    }
}
