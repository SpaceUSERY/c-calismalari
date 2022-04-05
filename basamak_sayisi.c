
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int alinanSayi;
    printf("sayi gir:");
    scanf("%d", &alinanSayi);

    for (int i = 0; ; i++)
    {
        int ali = alinanSayi%10;
        printf("%d\n",ali);
        alinanSayi/=10;
        if (alinanSayi==0)
        {
            printf("basamak sayisi: %d",i+1);
            break;
        }
        
        
    }
    
}
