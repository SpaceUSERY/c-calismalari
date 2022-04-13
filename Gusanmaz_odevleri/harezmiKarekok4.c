/*
- harezmi algoritması
- 1) karekökü alınacak sayıyı kare + sayı örnek : 39=36+3
- 2) Karenin karekökü bellidir. karekökü alınacak sayıdan çıkart:
- kök =6 >>> 39+6=6x6+3 >>> 39-36=6 sayı=3
- 3) sayıyı kökün iki katına böl : 3/(6x2)=3/12=1/4=bölüm
- 4) bölümü köke ekle:
- kök+bölüm=6+ 1/4 =6,25
*/

#include <stdio.h>
int k;
int karekokuVarMi(int kontrol);
int main(int argc, char const *argv[])
{
    int alinacakSayi,cikarilmiSayi;
    printf("Karekökü alınacak sayıyı giriniz:"); // sayıyı aldık
    scanf("%d", &alinacakSayi);
    for (int i = alinacakSayi; i > 0; i--) // sayıyı azaltmalı ve her azalttığımız sayının karekökünü kontrol etmeliyiz.
    {
        if (karekokuVarMi(i) == i)
        {
            printf("Alinan Sayiya en yakin karekoku alinabilir deger : %d\n",i);

            cikarilmiSayi= alinacakSayi-i;
            printf("cikarilmis sayi :%d\n",cikarilmiSayi);

            printf("k sayisi %d \n",k);

            double bolum = (double)((cikarilmiSayi)/(2*k));
            printf("bolum = %lf\n",bolum);

            double karekoku = bolum+k;
            printf("Alinan Sayinin karekoku= %lf\n",karekoku);

            break;
        }
        else
        {
            continue;
        }
    }

    return 0;
}

int karekokuVarMi(int kontrol)
{
    // buradaki fonksiyonda karesiAlinanSayi k degeridir.
    int karekokuOlanSayi, kareSonucu,kok;
    for ( k = kontrol; k > 0; k--)
    {
        int kareSonucu = 1;
        for (int j = 1; j <= 2; j++)
        {
            kareSonucu *= k;
        }
        if (kontrol == kareSonucu) // karekoku olan sayi bulduk demektir fonksiyondan cikip degeri maine print işlemi için gönderebilirz.
        {
            karekokuOlanSayi = kareSonucu;
            break;
        }
    }
    return karekokuOlanSayi;
}