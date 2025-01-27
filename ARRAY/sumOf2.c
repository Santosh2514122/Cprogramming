#include<stdio.h>
int main()
{
    int i,a[10],b[10],c[10];
    printf("enter the element of 1st array:");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
     printf("enter the element of 2st array:");
    for(i=0;i<10;i++)
    {
     scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++)
    {
         printf("sum of array:");
     c[i]=a[i]+b[i];
     printf("\n sum of two array %d",c[i]);
    }
}
