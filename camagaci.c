// çam ağacı 
/*

         *
        ***
       ******
      ********
     **********
    ************
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    for(int i=0; i<7; i++){
 
        for (int k = 0; k < i; k++)
        {
            printf("");
             for(int j=0; j<k; j++){
             printf(" *");
             printf(" ");
        }
        }
        printf("\n");
    }
    return 0;
}
