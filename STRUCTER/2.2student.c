#include <stdio.h>
 struct student {
    int n;
    int id;
    char name[50];
    float  addfees;
 };
 int main() {
    struct sr=student student[3];
    printf("enter the number of em");
    for (int i = 0; i < 3; i++) {
        printf("Enter details of employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &student[i].id);
        printf("Name: ");
        scanf("%s", &student[i].name);
        printf("Salary: ");
        scanf("%f", &student[i].salary);
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s, Salary: %f\n", student[i].id, student[i].name, student[i].addFees);
    }

    return 0;
}