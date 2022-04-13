/*
 - Sayının kendisinden küçük en büyük karekökü alınabilir sayıyı bulan algoritma.
 - Sayı sayan bir döngüm olmalı.
 - Saydığımız sayıya kadar olan sayıların karekökü alınabilir sayıları bulmalı
 - diğer taraftan farklı bir döngü geldiğimiz sayıdan karekökü alınabilir bir sayıya kadar azalmalı ve her değeri yukarıdaki adımlarla yazdığımız karekekuVarMi fonksiyonunda kontrol etmeli.
*/
#include <stdio.h>
int karekokuVarMi(int kontrol);
int main(int argc, char const *argv[])
{
    int alinacakSayi;
    printf("Karekökü alınacak sayıyı giriniz:"); // sayıyı aldık
    scanf("%d", &alinacakSayi);
    for (int i = alinacakSayi; i > 0; i--) // sayıyı azaltmalı ve her azalttığımız sayının karekökünü kontrol etmeliyiz.
    {
        if (karekokuVarMi(i) == i)
        {
            printf("Alinan Sayiya en yakin karekoku alinabilir deger : %d",i);
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
    int karekokuOlanSayi, kareSonucu;
    for (int k = kontrol; k > 0; k--)
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