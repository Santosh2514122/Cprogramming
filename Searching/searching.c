#include<stdio.h>
int main()
{
    int n,i,k;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element of array:");
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("enter tne search element:");
    scanf("%d",&k);
    //for searching 
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            printf("print the searching element%d:",arr[i]);
        }
        else 
        {
            printf("not vailid element");
        }
    }
}