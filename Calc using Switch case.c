/*Name: Mohd Rahman Khan
Class: Mechanical       Div.:F
UIN:251M004*/
#include <stdio.h>

int main() {
    
    int num1=5,num2=15;
    int choice;
    
    printf("1.addition\n2.subtraction\n3.multiplication\n4.division\n5.exit\nEnter your choice => ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
    printf("addition is %d",num1+num2);
    break;
    case 2:
    printf("subtraction is %d",num1-num2);
    break;
    case 3:
    printf("multiplication is %d",num1*num2);
    break;
    case 4:
    printf("division is %f",(float)num1/num2);
    case 5:
    break;
    default:
    printf("invalid choice");
    break;
        
    }
    return 0;
    
}



   
