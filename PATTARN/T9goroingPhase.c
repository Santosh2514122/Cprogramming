// right angle tribngle
#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
for( int i=0;i<n;i++)
    { 
        for(int j=0;j<i+1;j++){
            printf(" * ");
        }
        printf("\n");
    }
   
 for( int i=0;i<n;i--)
    { 
        for(int j=0;j<n-i-1;j--){
            printf(" * ");
        }
        printf("\n");
    }
   

}
