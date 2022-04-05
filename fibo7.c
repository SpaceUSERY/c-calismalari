/*
Fibonacci dizisinin ilk 10 elemanını yazdıran program
1 1 2 3 5 8 13 21 34 55
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int fibo = 1;
    int tutac = 0;
    for (int i = 0; i < 10; i++)
    {
        fibo += i;
        printf("%d\n", fibo);
        i=tutac;
    }
}
