/*

Fibonacci dizisinin ilk 10 elemanını yazdıran program

1 1 2 3 5 8 13 21 34 55

*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int fibo;
    for (int i = 0; i < 10; i++)
    {
        for (int j=i; j < 20; j++)
        {
            fibo=i+j;
            i+=j;
        }
        printf("fibo=%d\n",fibo); 
    }
    
}
