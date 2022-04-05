// *
// ***


#include <stdio.h>
int main(int argc, char const *argv[])
{
    int alinanSayi,z;
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
                printf("*");
            }
        }
        z=i;
}
  
    if (alinanSayi-1==z)
    {
        for (int l = 0; l < z/2; l++)
        {
            printf("\n");
            for (int m = 0; m < z; m++)
            {
                printf(" ");
               
            }
            printf("*");
        }
        
    }
    
}