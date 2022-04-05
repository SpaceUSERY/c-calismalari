//1-1000'e kadar olan sayıların perfect number olanlarını yazıdran program.

//perfect number= tam bölenlerinin toplamına eşit olan sayıdır.

//örneğin:6;

// başla 
// 1-1000 say;
// sayının tam bölenlerini bul.
// eğer tam bölenlerinin toplamı sayıya eşitse ekrana yazdır.
//çık

#include <stdio.h>
int i,j,z;
int main(){
for(i=2; i<10; i++){
for(j=2; j<i; j++){
if(i%j==0){
z=j;
}
}
}
}
