
/*
cam agaci

            *
           * *
          * * *
         * * * *
        * * * * *
*/
// kullanıcı tanımlı büyüklükteki çam ağacı
// 1-başla
// 2-kullanıcıdan sayı al
// 3-alinan sayiya göre çam ağacını oluştur.
// 4-sapını çiz
// 5-çık

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int alinanSayi;
    printf("sayi girin:");
    scanf("%d",&alinanSayi);
    for (int i = 0; i < alinanSayi; i++)
    {
        printf("\n");
        for (int j = i; j < alinanSayi; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("*");
            if (k < i)
            {
                printf(" ");
            }
        }

        if (i == alinanSayi-1)
        {
            printf("\n");
            for (int l = 0; l < 6; l++) // sap uzunluğu
            {
                for (int m = 0; m < alinanSayi/4; m++)
                {
                    for (int n = m; n < 6; n++)
                    {
                        printf(" ");
                    }
                }
                printf("*\n");
            }
        }
    }
    return 0;
}
