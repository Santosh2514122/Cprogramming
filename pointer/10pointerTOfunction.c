#include <stdio.h>

typedef struct {
    void (*printMessage)();
} Printer;

void printHello() {
    printf("Hello from struct!\n");
}

int main() {
    Printer printer = {printHello};
    printer.printMessage();
    return 0;
}
