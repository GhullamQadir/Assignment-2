#include <stdio.h>
#include <conio.h>
int main() { 
float fahrenheit, celsius;
printf("the temperature in Fahrenheit is 60: ");
scanf("%f", &fahrenheit);

celsius = (fahrenheit - 32) * 5 / 9;

printf("Temperature in Celsius: %.2f\n", celsius);

getch();
}
