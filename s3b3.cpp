#include <stdio.h>

int main() {
    float radius, circumference, area;
    float PI = 3.14159265;
    printf("Nhap ban kinh hinh tron (r): ");
    scanf("%f", &radius);
    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("Chu vi hinh tron la: %.2f\n", circumference);
    printf("Dien tich hinh tron la: %.2f\n", area);
    return 0;
}
