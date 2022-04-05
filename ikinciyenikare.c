#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k,l,m;
    for ( i = 0; i < 12; i++)
    {
        if(i==0|| i==11){
            for (j = 0; j< 11; j++)
            {
                if(j>-1 || j<10){
                     printf("* ");
                }
               if(j==10){
                   printf(" *");
               }
            }
        }
        if(i>0 && i<11)
        {
            for ( k = 0; k < 1; k++)
            {
                printf("*");
            }
            for (l=0; l<22; l++){

                printf(" ");
            }
            for(m=0; m<1; m++){

                printf("*\n");
            }
        }
        if(i==0){
            printf("\n");
        }
    }
    
    return 0;
}
