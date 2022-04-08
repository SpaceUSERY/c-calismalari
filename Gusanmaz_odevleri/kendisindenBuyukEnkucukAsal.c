#include <stdio.h>
int main(int argc, char const *argv[])
{
    int alinanSayi, sonuc;
    printf("giris yapiniz : ");
    scanf("%d", &alinanSayi);
    for (int i = alinanSayi;; i++) // geldiğimiz sayi;
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
            break;
        }
        else
        {
            continue;
        }
        return 0;
    }
    printf("Yani kendisinden buyuk en kucuk Asal = %d", sonuc);
}
