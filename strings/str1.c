#include<stdio.h>
#include<string.h>
int main() {
char str[25];
int i, j,k,length;
 printf("enter string : ");
fgets(str,sizeof(str),stdin);
str[strcspn(str, "\n")] = '\0';
length = strlen(str);
for(i = 0; i < length; i++) {
for(j = i + 1; j < length; j++) {
if(str[i] == str[j]) {
for( k = j; k < length; k++) {
 str[k] = str[k + 1];
 }
length--;  
j--;
}
}
}
printf("your string : " " %s\t ", str);
return 0;
}
