#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex num1, num2, sum;

    printf("Enter the real and imaginary part of first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("Enter the real and imaginary part of second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

    printf("Sum of complex numbers: %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}