/*
 - Kendisinden büyük en küçük asal sayıyı bulan program
 -  sayıyı al
 -  sayıdan itibaren asal sayı bulana kadar say, sonsuz döngü olsun.
 -  asala ulaşırsa döngü dursun.
 -  aksi takdirde asal bulana kadar say.
 -  çık.
*/
#include <stdio.h>
int kendisindenBuyukEnKucukAsalSayi(int deger);
int main(int argc, char const *argv[])
{
    int deger;
    printf("Sayi giriniz:");
    scanf("%d", &deger);
    printf("Kendisinden Buyuk En Kucuk Asal Sayi: %d", kendisindenBuyukEnKucukAsalSayi(deger));
    return 0;
}
int kendisindenBuyukEnKucukAsalSayi(int deger)
{
    int kendisindenBuyukEnKucukAsal;
    for (int i = deger;; i++)
    {
        int sayac = 0;
        int j;
        for (j = 2; j < i; j++)
        {
            if (i % j != 0)
            {
                sayac++;
            }
        }
        if (j - 2 == sayac) //  bu asal olmuş oluyor.
        {
            printf("%d", sayac);
            break;
        }
        else
        {
            continue;
        }
    }
    if (deger<2)
    {
        kendisindenBuyukEnKucukAsal=0;
    }
    
    return kendisindenBuyukEnKucukAsal;
}