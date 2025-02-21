
//wap print 1 to 100 which div by 2 && 3
#include<stdio.h>
int main()
{
int i=1;//iniclization
while(i<=100)//check condition
{
if(i%2==0 && i%3==0)
       {
printf("i=%d\n",i);
       }
       i++;
}
return 0;
}