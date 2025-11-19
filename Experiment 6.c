/*Name :Mohd Rahman Khan
Branch:Mechanical    Div:F
UIN:251M004      Roll no.:04*/
#include <stdio.h>

void counter() {
    static int count = 0;  
    count++;                
    printf("Function called %d times\n", count);
}

int main() {
    counter();
    counter();
    counter();
    counter();  

    return 0;
}
