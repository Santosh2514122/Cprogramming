#include<stdio.h>
int main()
{ char ch;
 printf("enter the character:");
 scanf("%d",&ch);
 
 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'
 ||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
  {
  printf("vowel\n");
  }
  else
  {
  printf("consonant\n"); 
  }
 return 0;



}