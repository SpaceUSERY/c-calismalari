#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 2; i < 100; i++) // geldiğimiz sayi;
    {
        int printci=0;
        for (int j = (i-1); j >= 2; j--) // geldiğimiz sayıdan 2'ye  kadar geriye doğru saymaya başladık.
        {
            if (i%j==0) // geldiğimiz sayıdan 2'ye kadar olan sayılardan herhangibirisi kalansız bölünürse sayı asal olmaz
            {
                printci=i;
            }     
        }
       if (printci==0)
       {
           printf("Bu Sayi asal : %d\n",i);
       }
       /*
        if (printci!=0)
        {
           // printf("Bu sayi asal degil %d\n",printci);
        }else{
            printf("Bu Sayi asal : %d\n",i);
        }
        */
    }
    return 0;
}
