#include <stdio.h>
 int main() 
 {
    char arr[3][4] = {
        {'a','b' , 'c', 'd'},
        {'e', 'f', 'g', 'h'},
        {'i','j','k','l'}
     };
     char (*ptr)[4] = arr; // Pointer to an array of 4 integers
      for (int x = 0; x < 3; x++) 
     {
        for (int z = 0; z < 4; z++) 
        {
          printf("%d ", ptr[x][z]);
        }
        printf("\n");
    }

    return 0;
}
