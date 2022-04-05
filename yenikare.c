#include <stdio.h>
int main(){
    int i,j,k,l,m;

    for(i=0; i<5; i++){
        if(i==0 || i==4){
             printf("\n");
            for ( j = 0; j< 11; j++)
            {
                printf("*");
            }
            
        }   
        if(i==1 ||i==2 || i==3){
            printf("\n");
            for (k=0; k < 1; k++)
        {
            printf("*");
        }
            for ( l = 0; l < 9; l++)
            {
                printf(" ");
            }
            for ( m = 0; m < 1; m++)
            {
                printf("*");
            } 
        }

    }

}