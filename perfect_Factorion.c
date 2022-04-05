/*
Perfect factorion: Örneğin 145 sayısının rakamlarının faktöriyellerinin toplamı kendisine eşittir.
145 gibi sayılar factorion sayılardır.

- 1-100000 arası sayı say
- saydığın sayının rakamlarını bul tek tek.
- daha sonra faktöriyellerini al.
- faktöriyelleri topla.
- sayıya eşitse printle.
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{

    for (int i = 1; i < 100000; i++)
    {
        int gelinenSayi = i, rakam = 0, faktoriyelSonucu = 1, toplam = 0;
        for (int j = 1;; j++)
        {
            rakam = gelinenSayi % 10;
            for (int k = 1; k <= rakam; k++) // gelinen sayının rakamlarının faktöriyelini bulacak olan döngü.
            {
                faktoriyelSonucu *= k;
            }
            toplam += faktoriyelSonucu;
            faktoriyelSonucu = 1;
            gelinenSayi /= 10;
            if (gelinenSayi == 0)
            {
                break;
            }
        }
        if (i == toplam)
        {
            printf("%d\n", toplam);
        }
    }

    return 0;
}
