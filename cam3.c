/*
cam agaci

        *
       ***
      *****
     *******
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int alinanSayi;
    printf("cam agaci icin sayi girin:");
    scanf("%d", &alinanSayi);
    for (int i = 0; i < alinanSayi; i++)
    {
        printf("\n");
        for (int j = 0; j < alinanSayi; j++)
        {
            if (j > i)
            {
                printf(" ");
            }
        }
        for (int k = 0; k < i; k++)
        {
            printf("*");
        }
        if (i == alinanSayi - 1)
        {
            
            for (int n = 0; n < alinanSayi / 2; n++)
            {
                printf("\n");
                for (int l = 0; l < (alinanSayi / 2); l++)
                {
                    printf(" ");
                if(l==(alinanSayi/2)-1){
                        for (int m = 0; m < alinanSayi / 2; m++)
                        {
                        printf("*");
                        }
                }
                }
            }
        }
    }
    printf("\n");
    return 0;
}
