#include<stdio.h>
void England()
{
printf("are you England\n");
return ;
}
void Australia()
{
printf("are you Australia\n");
England();
return ;
}void india()
{
printf("are you india\n");
Australia();
return ;
}void main()
{
//printf("are you England\n");
india();//calling india //1
return ;
}