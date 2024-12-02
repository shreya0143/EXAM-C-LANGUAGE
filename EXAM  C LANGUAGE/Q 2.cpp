#include <stdio.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float num1, num2, result;
    int choice;

    
    printf("Select an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice (1/2/3/4): ");
    scanf("%d", &choice);

    
    printf("Enter first numbers: ");
    scanf("%f ", &num1);
    
    printf("Enter secound numbers: ");
    scanf("%f ", &num2);

    
    switch(choice) {
        case 1:
            result = add(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = divide(num1, num2);
                printf("Result: %.2f\n", result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid choice! Please select a valid option (1-4).\n");
    }

    return 0;
}



float add(float a, float b) {
    return a + b;
}


float subtract(float a, float b) {
    return a - b;
}


float multiply(float a, float b) {
    return a * b;
}


float divide(float a, float b) {
    return a / b;
}