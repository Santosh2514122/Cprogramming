#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Prompt the user to enter the number of terms
    printf("Enter the number of terms for the harmonic series: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Harmonic Series up to %d terms:\n", n);

    // Calculate the harmonic series using a loop
    for (int i = 1; i <= n; i++) {
        printf("1/%d ", i);
        sum += 1.0 / i;

        // Print "+" between terms, except for the last term
        if (i < n) {
            printf("+ ");
        }
    }

    printf("\n\nSum of the harmonic series: %.6f\n", sum);

    return 0;
}