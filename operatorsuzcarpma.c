// operatörsüz çarpma işlemi
// iki sayiyi nasıl carpariz?
// 5*3=15
// 6*5=30



#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sayi1,sayi2,sonuc =0,i=1;
    printf("buyuk sayi1 gir:"); //5
    scanf("%d",&sayi1);

    printf("kucuk sayi2 gir:"); //3
    scanf("%d",&sayi2);
    
    while (i<=sayi2){
        sonuc+=sayi1;
        i++;
     //  printf("%d",i);
    }
   printf("%d",sonuc);


    return 0;
}
