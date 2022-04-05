#include <stdio.h>
int main(int argc, char const *argv[])
{
    //istek=n 
    int j,sayac,istek=8;

    for (int i = istek; i ; i++) // kendisinden büyük en küçük asal sayı.
    {
        sayac=0;
        for (j = 2; j < istek; j++)
            {
                if (istek % j != 0) 
                {
                    sayac++;
                }
            }
            if (j-2 == sayac) //  bu asal olmuş oluyor.
            {
                printf("%d",sayac);
               break;
            }else{
                continue;
            }

    }
    

     
    return 0;
}
