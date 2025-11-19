/*Name :Mohd Rahman Khan
Branch:Mechanical    Div:F
Roll no.:04
UIN:251M004*/
#include <stdio.h>

int main() {
    char str[100];
    int i, start, end, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str); 

    for (end = 0; str[end] != '\0'; end++);

    end--;  
    start = 0;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        printf("\nThe string is a palindrome.\n");
    else
        printf("\nThe string is NOT a palindrome.\n");

    return 0;
}

