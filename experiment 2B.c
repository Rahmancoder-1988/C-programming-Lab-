/*Name :Mohd Rahman Khan
Branch:Mechanical    Div:F
UIN:251M004      Roll no.:04*/
#include <stdio.h>

int main() {
    int start, end, i, sum = 0;

    printf("Enter the first number: ");
    scanf("%d", &start);

    printf("Enter the second number: ");
    scanf("%d", &end);

    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }
    for (i = start; i <= end; i++) {
        if (i % 2 != 0) { 
            sum += i;
        }
    }

    printf("\nSum of all odd numbers between %d and %d = %d\n", start, end, sum);

    return 0;
}

