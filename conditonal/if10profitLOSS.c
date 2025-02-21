#include<stdio.h>
int main()
{
int cp,sp;
printf("enter the value cp and sp:");
scanf("%d%d",&cp,&sp);
if(sp>cp)
{
   printf(" profit") ;
}
else if(sp=cp)
{
    printf(" no loss,no profit");
}
else
{
  printf("loss") ;  
}
return 0;
}
/*
enter the value cp and sp:23
24
 profit
 */