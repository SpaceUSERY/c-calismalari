#include <stdio.h>

int main()
{
    int boyut=0, i, j, k, l;
    while (1)
    {

        printf("Bir boyut giriniz:\n ");
        scanf("%d", &boyut);
        if (boyut > 80)
        {
            break;
        }
        else
            printf("80 den büyük bir sayi giriniz:");
    }
    k = (boyut / 2);
    l = (boyut / 2) + 1;

    for (i = 0; i < boyut; i += 2)
    {
        for (j = 0; j < (boyut - i) / 2; j++)
        {
            printf(" ");
        }

        for (j = 0; j <= i; j++)
        {
            printf("*");

            if (j == (i-16)/2 && i == (boyut - 18))
            {
                j += 16;
                printf("MILENYUM MUCAHIT");
            }
        }
        for (j = 0; j < (boyut - i) / 2; j++)
        {
            printf(" ");
        }
        printf("\n");
    }

    for (i = 0; i < boyut; i += 2)
    {
        for (j = 0; j < (boyut) / 2; j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
}
