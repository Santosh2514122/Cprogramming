#include <stdio.h>

void add(int a, int b) {
    printf("Sum: %d\n", a + b);
}

int main() {
    void (*funcPtr)(int, int);
    funcPtr = add;
    funcPtr(5, 3); // Call function with arguments
    return 0;
}
