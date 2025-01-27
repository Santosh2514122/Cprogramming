#include <stdio.h>

typedef void (*Operation)(int, int);

void divide(int a, int b) {
    if (b != 0) printf("Divide: %.2f\n", (float)a / b);
    else printf("Division by zero is not allowed.\n");
}

int main() {
    Operation op = divide;
    op(10, 2);
    return 0;
}
