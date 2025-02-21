//// Check if the number is positive, negative, or zero
#include <stdio.h>
int main() {
    int n ;
    printf("enter the number:");
    scanf("%d",&n);
    if (n > 0) {
        printf("Positive.\n");
    } else if (n < 0) {
        printf("Negative.\n");
    } else {
        printf("Zero.\n");
    }

    return 0;
}

