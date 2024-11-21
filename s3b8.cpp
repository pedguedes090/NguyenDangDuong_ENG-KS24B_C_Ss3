#include <stdio.h>

int main() {
    int number, digit1, digit2, digit3, digit4, reversedNumber;
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &number);
    digit1 = number % 10; 
    number /= 10; 
    digit2 = number % 10; 
    number /= 10; 
    digit3 = number % 10; 
    number /= 10; 
    digit4 = number % 10; 
    reversedNumber = digit1 * 1000 + digit2 * 100 + digit3 * 10 + digit4;
    printf("So nghich dao la: %d\n", reversedNumber);
    return 0;
}
