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
int main(int argc, char const *argv[])
{
    int alinacakSayi;
    printf("Karekökü alınacak sayıyı giriniz:"); // sayıyı aldık
    scanf("%d", &alinacakSayi);
    //şimdi en yakın karekökü bulmalıyız.
    for (int i = 1; i; i++)
    {
        int kareler = 1;
        for (int j = 1; j <= 2; j++)
        {
            kareler *= i;
        }
        if (kareler >= alinacakSayi)
        {
            printf("amaca ulasildi kareler = %d", kareler);
            break;
        }
        else
        {
            continue;
        }
    }
}
