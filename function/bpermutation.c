#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
    fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,r;


    printf("enter n:");
    scanf("%d",&n);
    printf("enter r:");
    scanf("%d",&r);
    int nfact=factorial(n);

    int nrfact=factorial(n-r);
    int ncr=nfact/nrfact;
    printf("%d",ncr);
   // int a=factorial(5);
   // printf("%d",a);
    return 0;
}