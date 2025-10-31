
#include <stdio.h>
/* Name:Mohd.Rahman Khan
Class:Mechanical      Div.:F
UIN:251M004 */
    int main() {
    int num1, num2, i, sum = 0;
    printf("enter the first number");
    scanf("%d", &num1);
    printf("enter the second number");
    scanf("%d",&num2);
    if (num1>num2)
    {
    int temp = num1;
    num1=num2;
    num2=temp;
    }
    for(i = num1 + 1;i < num2; i++)
       { sum+= i;}
       printf("sum of all the numbers between %d and %d is: %d\n", num1, num2, sum);
    return 0;
}
