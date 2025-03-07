#include<stdio.h>
int main()
{
    int n;
    int i=1;
    printf("enter the number:");
    scanf("%d",&n);
    do
    {
        printf("table of give number:%d\n",n*i);
        i++;
    } while (i<=10);
    return 0;
    
}