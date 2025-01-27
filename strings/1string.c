#include<stdio.h>
int main()
{
 char name [3];//dec of string
 printf("enter the name:");
 //scanf("%s",name);//using of scanf function (not using space)
 gets(name);//gets function(using for space)(it has buffers problem)
 //scanf("%s.5",name);
 //printf("%5s\n",name);//length character
 //printf("%10.5s\n",name);//length  character next 5 line
 printf("%s\n",&name[2]);// print the 2 index
 //puts(name); //next line
 // puts(name);//for next line
}
