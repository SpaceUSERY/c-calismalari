#include <stdio.h>
int swap(int*, int*);


int main(int argc, char const *argv[])
{
    //pointer: bir değişkenin adresini tutan değişken demek
    int a=0;
    //scanf("%d", &a);

    //printf("%p", &a);

    int *point1;
  
    // printf("%p\n", p);
    
    // printf("%d\n", *p);

    printf("%d\n", (*p)++);
    printf("%d\n", *p);
    printf("%d", ++(*p));
   
    *p=8;
    
    printf("%d", degisken);

     int degisken=5; 

   int  *p=&degisken;
  
    return 0;
}

// int swap(int* point1, int* point2){

// }

// void fonksiyon(){
//     printf("geri donumu olmayan fonskiyon ornegi \n");
// }

// int fonksiyon2(int anan){
    
//     int i=5;
//     return i+=anan;
// }