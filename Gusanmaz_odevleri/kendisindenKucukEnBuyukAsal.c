#include <stdio.h>
int main(int argc, char const *argv[])
{
    int alinanSayi;
    printf("giris yapipiniz : ");
    scanf("%d", &alinanSayi);
    int sonuc;
    for (int i = 2; i <= alinanSayi; i++) // geldiğimiz sayi;
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
            printf("Bu Sayi asal : %d\n", i);
            sonuc = i;
        }
    }
    printf("Yani kendisinden kucuk en Buyuk Asal = %d", sonuc);
    return 0;
}