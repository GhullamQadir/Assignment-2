#include <stdio.h>
#include <conio.h>

void main() {
    float totalAmount, finalAmount;
    float discount;

    printf("Enter the total shopping amount: ");
    scanf("%f", &totalAmount);

    if (totalAmount > 5000) {
        discount = 0.20; 
    } else if (totalAmount >= 3000) {
        discount = 0.10; 
    } else {
        discount = 0.0; 
    }

    finalAmount = totalAmount - (totalAmount * discount);

    printf("Final amount after discount: %.2f\n", finalAmount);

    getch();
}