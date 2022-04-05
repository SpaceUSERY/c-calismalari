/*
Armstong : Tüm basamaklarındaki rakamların sayı değerlerinin küpleri toplamı,kendisine eşit olan sayılara "Armstrong sayı"denir.

Örneğin; 371=3^3+7^3+1^3=
         27+343+1=
         =371;
- 0-1000'e kadar say.
- geldiğin sayının rakamını bul. küpünü al, bir değişkene at.
- diğer rakamı bul,küpün al attığın değişkene topla.
- işlem yapıp attığın değişken saydığın sayıya eşitse ekrana bas.
- 1000'e sayma işlemi bitince çık.
*/

#include <stdio.h>

int main()
{

    for (int i = 1; i < 1000; i++)
    {
        int islemYapilacakSayi, araSayi = 0, rakam=0, kupu = 1;
        islemYapilacakSayi = i;
        for (int k = 1;; k++)
        {
            rakam = islemYapilacakSayi % 10;
            // printf("rakam: %d\n", rakam);
            for (int j = 0; j < 3; j++)
            {
                
                kupu *= rakam;
            }
            araSayi += kupu;
            kupu=1;
            islemYapilacakSayi /= 10;

            if (islemYapilacakSayi == 0)
            {
                // printf("i: %d, arasayi : %d\n", i,araSayi);
                break;
            }
        }
        if (araSayi == i)
        {
            printf("%d\n", i);
        }
    }
}
