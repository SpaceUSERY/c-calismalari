// başla
// sayi gir
// alinan sayinin çarpanlarınını bul.
// çarpanlar asal mı diye kontrol et.
// asalsa ekrana yazdır.
// çık

#include <stdio.h>

int main()
{
    int alinanSayi, i, sayac, carpan,j;
    printf("sayi gir :");
    scanf("%d", &alinanSayi);
    for (i = 2; i < alinanSayi; i++)
    {
        sayac = 0;
        if (alinanSayi % i == 0)
        {
            carpan = i; // geldigimiz sayinin carpanı
            for (j = 2; j < carpan; j++)
            {
                if (carpan % j != 0) // geldiğimiz sayıya bölünmeyen önceki sayılar asa
                {
                    sayac++;
                }
            }
            if (j-2 == sayac) // 
            {
                printf("%d\n", j);
            }
        }
    }

    return 0;
}