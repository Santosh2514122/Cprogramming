//
    // Finding the largest by comparing using
#include <stdio.h>
int main() {
    int a = 1, b = 2, c = 11;
    if (a >= b) {
        if (a >= c)
            printf("%d", a);
        else
            printf("%d", c);
    }
    else {
        if (b >= c)
            printf("%d", b);
        else
            printf("%d", c);
    }
    return 0;
}