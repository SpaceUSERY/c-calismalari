/*
 - Sayının kendisinden küçük en büyük karekökü alınabilir sayıyı bulan algoritma.
 - Sayı sayan bir döngüm olmalı.
 - Saydığımız sayıya kadar olan sayıların karekökü alınabilir sayıları bulan fonksiyon.
 - 
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int alinacakSayi;
    printf("Karekökü alınacak sayıyı giriniz:"); // sayıyı aldık
    scanf("%d", &alinacakSayi);
    //şimdi kendisinden kucuk karekoku bulmalıyız.
    for (int i = 1; i; i++) // sayı sayan sonsuz döngü
    {
        for (int k = i; k > 0; k--)
        {
            int kareler = 1;
            for (int j = 1; j <= 2; j++)
            {
                kareler *= k;
            }
            if (k == kareler)
            {
                printf("amaca ulasildi kucuk karekok = %d , k degerimiz : %d \n ", kareler, k);
                break;
            }
            else
            {
                printf("Karekoku tam olan sayilar %d, k degerimiz : %d \n ", kareler, k);
                continue;
            }
        }
    }

    return 0;
}

int karekokuVarMi(int kontrol){



}
