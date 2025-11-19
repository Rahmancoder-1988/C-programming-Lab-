/*Name :Mohd Rahman Khan
Branch:Mechanical    Div:F
UIN:251M004      Roll no.:04*/
#include <stdio.h>
int main() {
    int choice;
    float a, b, result;
start: 
    printf("\n----- Simple Calculator -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 5) {
        printf("\nExiting Calculator...\n");
        return 0;
    }
    printf("\nEnter two numbers: ");
    scanf("%f %f", &a, &b);
    switch (choice) {
        case 1:
            result = a + b;
            printf("Result = %.2f\n", result);
            break;
        case 2:
            result = a - b;
            printf("Result = %.2f\n", result);
            break;
        case 3:
            result = a * b;
            printf("Result = %.2f\n", result);
            break;
        case 4:
            if (b == 0)
                printf("Error! Division by zero not allowed.\n");
            else {
                result = a / b;
                printf("Result = %.2f\n", result);
            }
            break;
        default:
            printf("Invalid choice! Please try again.\n");
    }
    goto start;
    return 0;
}
