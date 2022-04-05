/*
- Çam Ağacı
        *
       ***
      *****
     *******
    *********
*/
// Kullanıcıdan veri al
// çam ağacını bas
// sapını bas
// çık

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int alinanSayi;
    printf("cam agaci icin sayi gir");
    scanf("%d",&alinanSayi);
    for (int i = 0; i <alinanSayi; i++)
    {
        for (int j = 0; j < alinanSayi; j++)
        {
            printf(" ");
            for (int k = 0; k < j; k++)
            {
                printf("*");
            }
            printf("\n");
        }

        
        
    }
    
    return 0;
}

