// 1-1000 arası sayı üret
//%10 ihtimalle 450-500 arasında olsun

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int yuzde, sayi, z;
    srand(time(NULL));
    yuzde = rand() % 100; // 0 ile 100 arasında bir sayı

    if (yuzde > 10)
    {
        for (int i = 0;; i++)
        {
            sayi = rand() % 1000;
            if (sayi > 450 && sayi < 500)
            {
                continue;
            }
            else
            {
                printf("yuzde 90: %d ", sayi);
                break;
            }
        }

    }

    if (yuzde <= 10)
    {
        for (int i = 0;; i++)
        {
            sayi = (rand() % 50) + 450;
            if (sayi <=450 && sayi >=500) // tekrar sayı üret.
            {
                continue;
            }
            else
            {
                printf("yüzde 10 :%d ", sayi);
                break;
            }
        }
    }
}