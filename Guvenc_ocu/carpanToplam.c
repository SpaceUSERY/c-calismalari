/*
public static int CarpanToplam(int sayi)
Bu fonksiyon arguman olarak dogal sayi alir ve aldigi sayinin dogal sayi carpanlarinin toplamini dondurur.
• 12 sayisinin carpanlari 1,2,3,4,6 ve 12 dir. 
• Dolayisiyla CarpanToplam(12) ifadesi 28 (1 + 2 + 3 + 4 + 6 + 12) dondurecektir.
• 13 sayisinin carpanlari 1 ve 13 dur. Dolayisyla CarpanToplam(13) 14 (1 + 13) dondurecektir.
• CarpanToplam fonksiyonuna arguman olarak 1’den kucuk bir sayi verilirse -1 dondurmelidir.
*/

#include <stdio.h>
int carpanToplam(int alinanSayi);
int main(int argc, char const *argv[])
{
    int alinanSayi;
    printf(" sayi girin :");
    scanf("%d", &alinanSayi);
    printf("Carpan Toplami: %d", carpanToplam(alinanSayi));
}
int carpanToplam(int alinanSayi)
{
    int carpanToplami = 0;
    if (alinanSayi < -1)
    {
        carpanToplami = -1;
    }
    else
    {
        for (int i = 0; i < alinanSayi; i++)
        {
            if (alinanSayi % i == 0)
            {
                carpanToplami += i;
            }
        }
    }
    return carpanToplami;
}