#include<stdio.h>
int main()
{
 int a[2][3],b[2][3],c[2][3],i,j;
 printf("enter the element of matrix:");
 for(i=0;i<2;i++)
 {
   for(j=0;j<3;j++)
    {
    scanf("%d",&a[i][j]);
    }
    printf("\n");
 }
  
 printf("enter the element of second matrix:");
 for(i=0;i<2;i++)
 {
   for(j=0;j<3;j++)
    {
    scanf("%d",&b[i][j]);
    }
    printf("\n");
 }
  printf("the first  matrix is:\n");//
 for(i=0;i<2;i++)
 {
   for(j=0;j<3;j++)
    {
 printf("%d\t",a[i][j]);
    }
    printf("\n");
 }

 printf("the second matrix is:\n");//matrix 2
 for(i=0;i<2;i++)
 {
   for(j=0;j<3;j++)
    {
 printf("%d\t",b[i][j]) ;  
 }
    printf("\n");
 }
 printf("sum of  matrix:\n");//sum of matrix 1+2
 for(i=0;i<2;i++)
 {
   for(j=0;j<3;j++)
    {
     c[i][j]=a[i][j]+b[i][j];
      printf("%d\t",c[i][j]);
    }
     printf("\n");
 }

 
}