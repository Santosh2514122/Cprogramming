#include<stdio.h>
int main()
{
int n ;
printf("enter the number of row:");
scanf("%d",&n);
for(int i=1;i<=n;i++) //outer loop for row   
   {
   for(int i=1;i<=i;i++) //inner loop for coloum 
     {
       printf("*");
     }
   printf("\n");
   }
   return 0;
   
}