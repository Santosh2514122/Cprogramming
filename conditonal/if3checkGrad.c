#include<stdio.h>
int main()
{
    char grade;
    printf("enter the grade:");
    scanf("%c",&grade);
    if(grade=='a' ||grade=='A')
    printf("Your grade is very execellant");
else if(grade=='b' || grade=='B')
    printf("Your grade is very good");
   else if(grade=='c'||grade=='C')
    printf("Your grade is good");
   else if(grade== 'd' ||grade=='D')
printf("Your grade is average");
 else   if(grade=='e' ||grade=='E')
    printf("Your grade is fail");
 // else  if(grade==e ||grade==E);
return 0;
}
/*
enter the grade:a
Your grade is very execellant
*/