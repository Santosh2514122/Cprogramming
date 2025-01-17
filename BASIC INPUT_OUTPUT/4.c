#include<stdio.h>
int main()
{
    float pi=3.14,radius,area,cf;
printf("enter the radius:");
scanf("%f",&radius);
area=pi*radius*radius;
printf("\narea of tringle: %f",area);
area=2*pi*radius;
printf("\ncircumfarence of tringle: %f",area);
return 0;
}