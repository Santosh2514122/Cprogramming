//enter the array element  and find 
#include<stdio.h>
 void main()
 {
int a[5];
printf("enter the array element:");
for( int i=0;i<5;i++)
scanf("%d",&a[i]);
for( int i=0;i<5;i++)
printf("array element at index %d is %d\n",i,a[i]);
printf("array element at index in reverce orde :");
for( int i=4;i>0;i--)
printf("array element at index in reverce order %d is %d\n",i,a[i]);
 }

#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate sum
    sum = num1 + num2;

    // Display result
    printf("Sum: %d\n", sum);

    return 0;
}
//OUTPUT
//Enter first number: 8
//Enter second number: 6
//Sum: 14