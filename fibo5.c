#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a=0,b=1,c=0;
    for (int i = 0; i < 10; i++)
    {
        //  1 1 2 3 5 8 13 21 34 55
        c=a+b;
        b=a;
        a=c;
        printf("\n%d",c);
    }

    return 0;
}
