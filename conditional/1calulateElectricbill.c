#include<stdio.h>
#include<string.h>
int main()
{
 int id,unit;
 char name[100];
printf("enter your name:");
scanf("%s",&name);
printf("enter your id:");
scanf("%d",&id);
printf("enter your unit:");
scanf("%d",&unit);
if(600>=unit)
{
  printf("your bill is % .2f",2.00*unit);
}
else if(400>=unit)
{
  printf("your bill is % .2f",1.80*unit);
}
else if(200>=unit)
{
  printf("your bill is % .2f",1.54*unit);
}
 else printf("your bill is % .2f",1.20*unit);
return 0;
}