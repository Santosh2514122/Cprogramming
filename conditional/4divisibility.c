#include<stdio.h>
int main()
{
    int n;
    printf ("enter the number");
    scanf("%d",&n); 
    if(n%5==0&&n%3==0)
    {
        printf("div by 5");
        printf("div by 3 ");
    }
else
{
    printf("not  div by 5");
    printf(" not div by 3"); 
}
}