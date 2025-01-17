#include <stdio.h>

int main() {
    int firstTerm, commonDifference, numTerms, currentTerm;
    int sum = 0;

    // Input values
    printf("Enter the first term of the AP: ");
    scanf("%d", &firstTerm);

    printf("Enter the common difference: ");
    scanf("%d", &commonDifference);

    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);

    // Validate input
    if (numTerms <= 0) {
        printf("Number of terms must be a positive integer.\n");
        return 1;
    }

    printf("Arithmetic Progression:\n");

    // Generate AP and calculate sum
    for (int i = 0; i < numTerms; i++) {
        currentTerm = firstTerm + i * commonDifference;
        printf("%d ", currentTerm);
        sum += currentTerm;
    }

    printf("\n\nSum of the Arithmetic Progression: %d\n", sum);

    return 0;
}
