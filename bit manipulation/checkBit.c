#include<stdio.h>
   void checkbit( int n,int k)
  {
  if(n &(1<<(k-1)))
  {

 printf(" the %dth bit is set(1).\n");
  }
  else{
    printf("%d bit is not set(0):");
  }
  }
 int main()
 {
  int n,k;
  printf("enter the number:");
  scanf("%d",&n);
 printf("enter the bit position to check(1-base index):");
 scanf("%d",&k);
  checkbit(n,k);
 return 0;

 }