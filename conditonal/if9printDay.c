#include<stdio.h>
int main()
{
 int n=0;   
 printf("enter the number:");
 scanf("%d",&n);
 if(n==0)
{
    printf("sunday\n");
}
else if (n==1){
    printf("monday\n");
}
 else if(n==2){
        printf("tuesday\n");
}
else if(n==3){
    printf("wednesday\n");
} 
else if(n==4)
{
printf("thursday\n");
}
 else if(n==5)

{
    printf("friday\n");
}
 else if(n==6)
{
    printf("saturday\n");
}
else
{
    printf("default number\n");
}
return 0;
}
/*
enter the number:6
saturday
*/