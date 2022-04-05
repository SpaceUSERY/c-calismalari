#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sayi,us,sonuc;
    printf("sayi gir");
    scanf("%d",&sayi);

    printf("us giriniz :");
    scanf("%d",&us);


    for (int i = 0; i <us ; i++)
    {
       sonuc*=sayi;
    }
    printf("%d",sonuc);
    return 0;
}
