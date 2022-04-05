/*
palindrom sayi : iki taraftan okunduğu zaman okunuş yönüyle aynı olan sayılardır.
örnek:11, 22, 33, 44, 55, 66, 77, 88, 99 101, 111, 121, 131, 141, 151, 161, 171, 181, 191, 202, 212
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 11; i < 1000; i++)
    {
        int rakam = 0, guncelSayi = i, guncelSayi2 = i, basamakDegeri=1, basamakSayisi, sonuc=0, basamakSayisi2;

        // guncelsayi2 geldigimiz sayinin kac basamaklı olduğunu öğrenirken yok oluyor.
        // o yuzden 2 degiskendede aynı geldiğimiz i değerini tutuyoruz

        for (int l = 1;; l++) // kaç basamaklı olduğunu öğrenmek için bu döngü var
        {
            guncelSayi2 /= 10;

            if (guncelSayi2 == 0)
            {
                basamakSayisi = l;
                basamakSayisi2 = l;
                break;
            }
        } // kac basamaklı olduğunu öğrenip basamakDegeri ve basamakDegeri2 degiskenine atadık.

        for (int j = 1; j<=basamakSayisi2; j++)
        {
            rakam = guncelSayi % 10;
            guncelSayi /= 10;

            for (int k = 1; k < basamakSayisi; k++)
            {
                basamakDegeri *= 10;
            }
            sonuc += (rakam * basamakDegeri);
            basamakDegeri = 1;
            basamakSayisi--;
        }
        if (sonuc==i)
        {
            printf("Palindrom sayilar: %d\n",sonuc);
        }
        
    }

    return 0;
}
