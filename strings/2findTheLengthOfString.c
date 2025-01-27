//find the length of string  using predifine function(strlen)
/*#include<stdio.h>
#include<string.h>
int main()
{
 int count=0;
 char name [30];
 printf("enter the name :");
  gets(name);
  count=strlen(name);
  printf("string length is =%d",count);
}*/


// bithout using predefine function
#include<stdio.h>
//#include<string.h>
int main()
{char  name [30];
  int count=0 ,i=0;
  
  printf("enter the name:");
  puts(name);//allocate the memory
  while (name[i]!='\0' )
  {
    count++;
    i++;
    }
    puts(name);
    printf(" string length is =%d,count");
  }
  


