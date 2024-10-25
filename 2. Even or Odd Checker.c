#include <stdio.h> 
#include <conio.h>
void main() {
    int number;

    printf("Please enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is even.\n", number); 
    } else {
        printf("%d is odd.\n", number);  
    }
    
    printf("Press any key to continue ...");
    getchar();
    getchar();
    
    getch();
}