#include <stdio.h>

#define SIZE 4

int main(){
               //indexes:0,1,2,3
   int intArray[SIZE] = {1,2,4,7}; // has size of 4
   for(int i = 0; i < SIZE; i++)
   {
      printf("%d, ",intArray[i]);// 1, 2, 4, 7, ?, ?
   }

   return 0;
}