/*Name: Mohd Rahman Khan
Class: Mechanical       Div.:F
UIN:251M004*/
#include <stdio.h>

int main() {
    int physics,chemistry,mathematics;
    float average;
    printf("Enter physics marks:");
    scanf("%d",&physics);
    printf("Enter chemistry marks:");
    scanf("%d",&chemistry);
    printf("Enter mathematics marks:");
    scanf("%d",&mathematics);
    average = (physics + chemistry + mathematics)/3;
    average>= 50 ? 
    printf("eligible for admission"):
    printf("not eligible for admission");
    return 0;
}
