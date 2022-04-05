// girilen sayıyı tersten yazıdıran program..
//örneğin 1431 aldık bunu 1341 şeklinde yazdırmalı

// 10 un i nci üssünüü alacağız.
//
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int aldigimizSayi, vedat = 1,veli,basamakdegeri;
    printf("sayi giriniz:");
    scanf("%d", &aldigimizSayi);
    int ahmet = aldigimizSayi; // aldigimiz sayiyi tutan degisken

    for (int i = 0;; i++)
    {

        int hasan = aldigimizSayi % 10; // alinan sayiyinin tersteki ilk rakamı,ikinci rakamı,üçüncü rakamı....
        aldigimizSayi /= 10;            // diğer basamağa geçmek için 10 a bölüyoruz.

        for (int j = 0; j < veli; j++)
        {
         basamakdegeri *= 10;
        }
        vedat = (hasan)*basamakdegeri;
        printf("%d", hasan);
        veli = i + 1; // alinan sayinin basamak sayısı
        if (aldigimizSayi == 0)
        {

            printf("\nbasamak sayisi %d", veli);
            printf("\nOrjinal sayi: %d", ahmet);
            printf("vedat=%d", vedat);

            break;
        }
    }

    return 0;
}
