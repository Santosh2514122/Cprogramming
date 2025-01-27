#include <stdio.h>

void greet() {
    printf("Hello from greet!\n");
}

void (*getFunction())() {
    return greet;
}

int main() {
    void (*funcPtr)() = getFunction();
    funcPtr();
    return 0;
}
