#include<stdio.h>
void swap(int a,int b)

{
    int temp=a;
    a=b;
    b=temp;
    return ;

}
int main()
{
    int a,b;
    printf("enter number a:");
    scanf("%d",&a);
    printf("enter number b:");
    scanf("%d",&b);
    /*wap( a,b);
    int temp;
    temp=a;
    a=b;
   b=temp;
 // a=a+b;
 // b=a-b;
  //a=a-b;*/
    printf("swap a=%d and b=%d",a,b);
    return 0;


}