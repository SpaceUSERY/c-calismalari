#include <stdio.h>
int main(int argc, char const *argv[])
{
    int alinanDeger, sonuc,buyukAsal,kucukAsal;
    printf("giris yapiniz : ");
    scanf("%d", &alinanDeger);
    for (int i = alinanDeger+1;; i++)
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
            printf("Buyuk Asal = %d\n", buyukAsal);
            break;
        }
        else
        {
            continue;
        }
    }
    // yukarida kendisinden buyuk en kucuk asali bulduğumuza göre kendisinden kucuk en buyuk asali bulabiliriz.
    for (int i = 2; i < alinanDeger; i++)
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
        }
    }
    printf("Kucuk Asal = %d\n", kucukAsal);
    sonuc=buyukAsal-kucukAsal;
    printf("Yani AsalFark :%d",sonuc);
    return 0;
}
