#include <stdio.h>

typedef struct {
    void (*operate)(int, int);
} Calculator;

void add(int a, int b) { printf("Add: %d\n", a + b); }
void subtract(int a, int b) { printf("Subtract: %d\n", a - b); }

int main() {
    Calculator calc;
    calc.operate = add;
    calc.operate(10, 5);
    calc.operate = subtract;
    calc.operate(10, 5);
    return 0;
}
