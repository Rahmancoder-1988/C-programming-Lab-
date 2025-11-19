/*Name:Mohd Rahman Khan
Branch:Mechanical       Div:F
UIN:251M004     Roll no.:04*/
#include <stdio.h>
struct student_record {
    char name[50];
    int roll_number;
    float total_marks;
};
int main() {
    struct student_record s[5];
    int i, topper_index = 0;
    for (i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);  // works for single-word names

        printf("Roll Number: ");
        scanf("%d", &s[i].roll_number);

        printf("Total Marks: ");
        scanf("%f", &s[i].total_marks);
    }
    for (i = 1; i < 5; i++) {
        if (s[i].total_marks > s[topper_index].total_marks) {
            topper_index = i;
        }
    }
    printf("\n----- Topper Details -----\n");
    printf("Name: %s\n", s[topper_index].name);
    printf("Roll Number: %d\n", s[topper_index].roll_number);
    printf("Total Marks: %.2f\n", s[topper_index].total_marks);

    return 0;
}
