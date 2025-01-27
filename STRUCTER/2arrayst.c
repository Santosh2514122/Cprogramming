#include <stdio.h>
 struct Employee {
    int n;
    int id;
    char name[50];
    float salary;
 };
 int main() {
    struct Employee employees[3];
    printf("enter the number of em");
    for (int i = 0; i < 3; i++) {
        printf("Enter details of employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", &employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s, Salary: %f\n", employees[i].id, employees[i].name, employees[i].salary);
    }

    return 0;
}