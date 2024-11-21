#include <stdio.h>

int main() {
    int number, digit1, digit2, digit3, digit4, sum;
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &number);

    digit1 = number / 1000; 
    digit2 = (number / 100) % 10; 
    digit3 = (number / 10) % 10; 
    digit4 = number % 10; 

    sum = digit1 + digit2 + digit3 + digit4;

    printf("Tong cac chu so la: %d\n", sum);

    return 0;
}
