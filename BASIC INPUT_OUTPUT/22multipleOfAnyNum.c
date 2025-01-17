//WAP print multiplication of table of n number in reverse order;
#include<stdio.h>
int main()
{
int n,i;
printf("enter the  number:")
scanf("%d",&n);
for(i=0;i>=1;i--){
printf("%d*%d=%d\n",n,i, n*i);
}
}