// küçük ve saplı bir cam ağacı.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    for(int i=0; i<5; i++){
      printf("\n");
       for (int j = i; j<10; j++)
       {
           printf(" ");
       }
       for (int k = 0; k < i; k++)
       {
           printf("*");
            if (k<i)
       {
           printf(" ");
       }
       }
        
       if (i==4)
       {
           printf("\n");
          for (int l = 0; l < 3; l++) //sap indisi.
          {
              for (int m = 0; m < 3; m++) // bosluk bırakmak icin
              {
                  
                  for (int n = 0; n < 3; n++)
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


// daha sonra yapılacaklar:
/*
cam agaci

            *
           ***
          *****
         *******
        ********
*/




// kullanıcı tanımlı büyüklükteki çam ağacı
// 1-başla
// 2-kullanıcıdan sayı al
// 3-alinan sayiya göre çam ağacını oluştur.
// 4-sapını çiz
// 5-çık



/// normal çam ağacı yapalım