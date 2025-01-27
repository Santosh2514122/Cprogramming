//enter the array element  and find 
#include<stdio.h>
 void main()
 {
int a[5],i;
printf("enter the array element:");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0;i<5;i++)

printf("array element at index %d is %d\n",i,a[i]);

for(i=4;i>0;i--)
printf("array element at index in reverce order %d is %d\n",i,a[i]);
 }
