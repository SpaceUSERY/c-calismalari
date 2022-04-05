/*

Fibonacci dizisinin ilk 10 elemanını yazdıran program

1 1 2 3 5 8 13 21 34 55

*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
   for (int i = 1; i < 10; i++)
   {
       for (int j = i; j < 9; j++)
       {
          i+=j; 
          printf("%d \n",i);
       }
       
   }
   
   
   

    return 0;
}
