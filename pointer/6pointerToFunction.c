#include <stdio.h>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int (*funcPtr)(int, int);
    funcPtr = multiply;
    int result = funcPtr(4, 5); // Call function and store the result
    printf("Result: %d\n", result);
    return 0;
}
