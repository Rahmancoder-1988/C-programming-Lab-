/*Name :Mohd Rahman Khan
Branch:Mechanical    Div:F
UIN:251M004      Roll no.:04*/
#include <stdio.h>

int main() {
    int arr[50], n, i;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    p = &arr[n - 1];

    printf("\nArray in reverse order:\n");
    for (i = n; i > 0; i--) {
        printf("%d ", *p);
        p--;
    }

    return 0;
}
