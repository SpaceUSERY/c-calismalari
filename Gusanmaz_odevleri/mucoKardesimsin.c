// girilen sayı palindrom mu (123321) gibi
#include<stdio.h>
int main()
{
    int girilenSayi,kalan,tersi = 0,orjinal;

    printf("bir polindrom sayi giriniz:");
    scanf("%d",&girilenSayi);

    orjinal = girilenSayi;

    while(girilenSayi != 0)
    {

        //121                              2. adım 12                               3. adım 1                232           23           2
        kalan = girilenSayi%10;
        //kalan = 1                        2. adım kalan = 2                        3. adım 0                2              3           0
        tersi = tersi * 10 + kalan;
        //tersi = 1                        2. adım tersi = 12                       3. tersi = 120          2              23          230
        girilenSayi/=10;
        //girilenSayi = 12                   2. adım girilenSayi = 1        3. adım girilenSayi 0             23              2          0
    }


    if(orjinal==tersi){
        printf("%d palindrom",orjinal);
    }
    else
        printf("%d palindrom degildir",orjinal);

}