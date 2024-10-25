#include <stdio.h>


int main() {
    int year;

    printf("Enter the year: ");
    scanf("%d", &year);


    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap.\n", year);
    } else {
        printf("%d is not a leap year.\n", &year);
    }
    
    printf("Press Enter to exit...");
    getchar();
    getchar();

    return 0;
}