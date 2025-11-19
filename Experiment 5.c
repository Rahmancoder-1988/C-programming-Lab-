/*Name :Mohd Rahman Khan
Branch:Mechanical    Div:F
UIN:251M004      Roll no.:04*/
#include <stdio.h>
long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}
long long factorial_iterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of negative numbers is not defined.\n");
    } else {
        printf("\nFactorial of %d using iterative method = %lld\n",
               num, factorial_iterative(num));

        printf("Factorial of %d using recursive method = %lld\n",
               num, factorial_recursive(num));
    }
    return 0;
}
