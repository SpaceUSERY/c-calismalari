#include <stdio.h>
int asalFark(int n);
int main(int argc, char const *argv[])
{
    int alinanDeger, sonuc, buyukAsal, kucukAsal;
    printf("giris yapiniz : ");
    scanf("%d", &alinanDeger);

    printf("Asal fark= %d ", asalFark(alinanDeger));
    return 0;
}
int asalFark(int n)
{
    int fark = 0;
    int buyukAsal, kucukAsal;
    for (int i = n + 1;; i++)
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
            printf("Buyuk Asal = %d\n",buyukAsal);
            break;
        }
        else
        {
            continue;
        }
    }
    // yukarida kendisinden buyuk en kucuk asali bulduğumuza göre kendisinden kucuk en buyuk asali bulabiliriz.
    for (int i = 2; i < n; i++)
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
    printf("Kucuk asal= %d\n",kucukAsal);
    fark = buyukAsal - kucukAsal;
    return fark;
}