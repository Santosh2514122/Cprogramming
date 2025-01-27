#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    float marks;
};

int main() {
    struct Student students[3], temp;
    int i, j;

    for (i = 0; i < 3; i++) {
        printf("Enter name and marks of student %d: ", i + 1);
        scanf("%s %f", students[i].name, &students[i].marks);
    }

    // Sorting
    for (i = 0; i < 3 - 1; i++) {
        for (j = i + 1; j < 3; j++) {
            if (students[i].marks < students[j].marks) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\nSorted Students:\n");
    for (i = 0; i < 3; i++) {
        printf("%s: %.2f\n", students[i].name, students[i].marks);
    }

    return 0;
}