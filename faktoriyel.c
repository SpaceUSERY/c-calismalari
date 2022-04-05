#include <stdio.h>
int main()
{
    int alinanSayi,sonuc=1;
    printf("Sayi giriniz..\n");
    scanf("%d",&alinanSayi);

    for (int i = 1; i <= alinanSayi; i++)
    {

        sonuc*=i;
    }
    printf("%d", sonuc);
}
