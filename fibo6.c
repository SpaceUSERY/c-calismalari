/*
Fibonacci dizisinin ilk 10 elemanını yazdıran program
1 1 2 3 5 8 13 21 34 55
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int tutac=0;
    int fibo=0;
    for (int i = 1; i < 10; i++)
    {
        for (int j = i; j < i; j++)
        {
            tutac=j;
        }
        fibo=tutac+i;
        printf("fibo=%d",fibo);
    }
    
    return 0;
}
