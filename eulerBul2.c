#include <stdio.h>
double eulerBul(double deger);
int main(int argc, char const *argv[])
{
    double deger, sonuc;
    printf("Fonksiyonu cagirmak icin parametre gonderiniz. :");
    scanf("%lf", &deger);
    printf("%lf", eulerBul(deger));
    return 0;
}
double eulerBul(double deger)
{
    double sonuc = 1;
    double faktoriyelci = 1;
    if (deger < 1)
    {
        sonuc = 2.718;
    }
    else
    {
        for (int i = 1; i <= deger; i++)
        {
            faktoriyelci *= ((double)i);
            sonuc += 1 / faktoriyelci;
        }
    }
    return sonuc;
}