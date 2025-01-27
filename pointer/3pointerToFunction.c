#include <stdio.h>

void sayHello() {
    printf("Hello, World!\n");
}

int main() {
    void (*funcPtr)(); // Declaration of function pointer
    funcPtr = sayHello; // Assign function address to pointer
    funcPtr(); // Call the function using the pointer
    return 0;
}
