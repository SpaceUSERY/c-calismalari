// başla
// sayi gir
// alinan sayinin çarpanlarınını bul.
// çarpanlar asal mı diye kontrol et.
// asalsa ekrana yazdır.
// çık

#include <stdio.h>

int main()
{
    int alinanSayi, i, sayac, j, c, z;
    printf("sayi gir :");
    scanf("%d", &alinanSayi);

    for (i = 2; i < alinanSayi; i++)
    {
        sayac = 0;
        if (alinanSayi % i == 0)
        {
            for (j = 2; j < i; j++)
            {
                if (i % j != 0)
                {

                    sayac++;
                }
            }
            if ((j - 2) == sayac)
            {

                printf("\n  asal carpani:%d,", j);
            }

            // printf("\n sayinin carpanlari : %d, ",i);
        }
    }

    return 0;
}