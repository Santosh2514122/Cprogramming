#include <stdio.h>
#include <stdlib.h>
int main() {
    int x, y;
      //  switch variable
    char choice;

      // Take input
   
    printf("Enter the two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Enter the Operator (+,-,*,/)\n");
    scanf(" %c", &choice);

    //  for each operator
    switch (choice) {
    case '+':
        printf("%d + %d = %d\n", x, y, x + y);
        break;
        case '-':
        printf("%d - %d = %d\n", x, y, x - y);
        break;

    case '*':
        printf("%d * %d = %d\n", x, y, x * y);
        break;
    case '/':
        printf("%d / %d = %d\n", x, y, x / y);
        break;
    default:
        printf("Invalid Operator Input\n");
    }
  
    return 0;
}
/*
Enter the two numbers: 2
3
Enter the Operator (+,-,*,/)
*
2 * 3 = 6
*/