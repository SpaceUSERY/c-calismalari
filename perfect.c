// 1-1000'e kadar olan sayıların perfect number olanlarını yazıdran program.

// perfect number= tam bölenlerinin toplamına eşit olan sayıdır.

//örneğin:6;

// başla
// 1-1000 say;
// sayının tam bölenlerini bul.
// eğer tam bölenlerinin toplamı sayıya eşitse ekrana yazdır.
//çık

#include <stdio.h>

int main()
{
    int i, j;
    int c=0;
    for (i = 2; i < 1000; i++)
    {    // 1000'e kadar yazdırdık
        for (j = 2; j< i; j++) // i'nin ulaştığı sayıya kadar saydık. //i=6 j=2 ,j=3 j=4  j=5 j=6
        {
          
            if (i % j == 0) // i nin ulaştığı sayının tam bölenini bulduk. //6/2=3,  6/3=2, 6/4 çalışmadı. 6/5 çalışmadı 6/6=1
            {
                c+=j;
            }
            
           //   printf("\n %d",c);
          
        }
        if (c+1==i)
            {
                 printf("\n %d",i);
                
            }c=0;
    }
    return 0;
}
