/* girilen sayıyı tersine çeviren program;
 örnek 5789 girildi. printlenecek sonuç :9875 olmalı değişken içerisinde.
 sayi al
 alinan sayinin basamak sayısını bul.
 alınan sayının %10 , yapıp basamak değeriyle çarpılmalı ve boş değişkene atanmalı.
 /10 yapıp diğer basamağa geçilmeli.
 döngü sürmeli
 alinan sayı 0 olduğunda döngüden çıkılmalı ve değerlerin olduğu değişken printlenmeli.
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int girilenSayi = 1234, tutac, islemci, istenilenDegisken = 0, z, basamakDegeri=1, y;

    tutac = girilenSayi;  // girilen sayıyı kaybetmemeliyiz basamak sayısını bulurken kaybolacak çünkü.
    for (int i = 1;; i++) // basamak sayısnı bulamak  için bu döngüyü kullandık. i+1= basamak sayısıdır.
    {
        girilenSayi /= 10;
        if (girilenSayi == 0)
        {
            z = i ;
            y = i ;
            break;
        }
    }

    //z 4
    for (int j = 0; j < z; j++)
    {

        islemci = tutac % 10;
        tutac /= 10;

        //y 4 
        for (int k = 0; k < y; k++)
        {
            basamakDegeri *= 10;
        }
        y--;
        istenilenDegisken += (islemci * basamakDegeri);
        basamakDegeri=1;
    }
    printf("%d", istenilenDegisken);

    return 0;
}
