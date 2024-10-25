#include <stdio.h>
#include <conio.h>
void main() {
    
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int largest;

    if (num1 >= num2) {
        if (num1 >= num3) {
            largest = num1;
        } else {
            largest = num3; 
        }
    } else {
        if (num2 >= num3) {
            largest = num2; 
        } else {
            largest = num3; 
        }
    }

    
    printf("The largest number is: %d\n", largest);

    getch();
}