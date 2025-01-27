 #include <stdio.h>
 struct Person {
    char name[50];
    int age;
 };
 int main() {
    struct Person p, *ptr;
    ptr = &p;

    printf("Enter name: ");
    scanf("%s", ptr->name);
    printf("Enter age: ");
    scanf("%d", &ptr->age);

    printf("\nPerson Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);

    return 0;
 }