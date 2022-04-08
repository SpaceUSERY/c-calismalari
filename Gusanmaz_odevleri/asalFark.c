#include <stdio.h>

int asalFark(int alinanDeger);
int main(int argc, char const *argv[])
{
    int alinanDeger, sonuc;
    printf("giris yapiniz : ");
    scanf("%d", &alinanDeger);
    printf("%d", asalFark(int alinanDeger));
    return 0;
}

int asalFark(int alinanDeger)
{
    int buyukAsal, sonuc, kucukAsal;
    for (int i = alinanDeger;; i++) // geldiğimiz sayi;
    {
        int printci = 0;
        for (int j = (i - 1); j >= 2; j--) // geldiğimiz sayıdan 2'ye  kadar geriye doğru saymaya başladık.
        {
            if (i % j == 0) // geldiğimiz sayıdan 2'ye kadar olan sayılardan herhangibirisi kalansız bölünürse sayı asal olmaz
            {
                printci = i;
            }
        }
        if (printci == 0)
        {
            buyukAsal = i;
            printf("Buyuk Asal = %d", buyukAsal);
            break;
        }
        else
        {
            continue;
        }
    }
    // yukarida kendisinden buyuk en kucuk asali bulduğumuza göre kendisinden kucuk en buyuk asali bulabiliriz.
    for (int i = 2; i <= alinanDeger; i++) 
    {
        int printci = 0;
        for (int j = (i - 1); j >= 2; j--) 
        {
            if (i % j == 0) // geldiğimiz sayıdan 2'ye kadar olan sayılardan herhangibirisi kalansız bölünürse sayı asal olmaz
            {
                printci = i;
            }
        }
        if (printci == 0)
        {
            kucukAsal = i;
            printf("Kucuk Asal = %d", kucukAsal);
        }
    }
    sonuc = (buyukAsal - kucukAsal);
    return sonuc;
}