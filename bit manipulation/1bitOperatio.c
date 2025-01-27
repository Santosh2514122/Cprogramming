#include<stdio.h>
int main()
{
 int a,b;
 printf("enter the two  number:");
 scanf("%d%d",&a,&b);
 //bitwise AND
  int andResult=a&b;
  printf("bitwise  and of a,b %d %d is= :%d\n",a,b,andResult);
 // bitwise or 
 int orResult=a|b;
 printf("bitwise OR of a,b %d %d is= :%d\n",a,b,orResult);
 //bitwise xor 
  int xorResult=a^b;
 printf("bitwise xor of a,b  %d and %d is= :%d\n",a,b,xorResult);
 // bitwise invese 
   int notResult=~a;
 printf("bitwise inverse of a is= :%d\n",a,notResult);
  //left shift result
   int leftshiftResult=a<<1;
 printf("bitwise leftshift by 1 poisition is =:%d\n",a,leftshiftResult);
  //righshift result
  int rightshiftResult=a>>1;
 printf("right shift of %d by 1 position is =:%d\n",a,rightshiftResult);
 return 0;
}