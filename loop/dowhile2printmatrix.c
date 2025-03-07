#include <stdio.h>
int main() {
    // Declaring  variables
    int i = 0, j;
    int c = 0;

    // Outer loop starts
    do {
        j = 0;

        // inner loop starts
        do {
            printf("%d  ", c++);
            j++;
        } while (j < 3);
        printf("\n");
        i++;
    } while (i < 3);
    return 0;
}
/*
0  1  2  
3  4  5  
6  7  8  
*/