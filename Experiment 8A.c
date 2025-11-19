/*Name :Mohd Rahman Khan
Branch:Mechanical    Div:F
Roll no.:04
UIN:251M004*/
#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str); 

    for (i = 0; str[i] != '\0'; i++) {
        length++;       
    }

    printf("\nLength of the string = %d\n", length);

    return 0;
}
