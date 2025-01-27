#include <stdio.h>

void onEvent() {
    printf("Event occurred!\n");
}

void registerCallback(void (*callback)()) {
    callback();
}

int main() {
    registerCallback(onEvent);
    return 0;
}
