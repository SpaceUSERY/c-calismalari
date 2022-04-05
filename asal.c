// başla
// sayi gir
// alinan sayinin çarpanlarınını bul.
// çarpanlar asal mı diye kontrol et.
// asalsa ekrana yazdır.
// çık

#include <stdio.h>

int main(){
int a,i,sayac,j,c,s;
printf("sayi gir :");
scanf("%d",&a);

for(i=2; i<a; i++){
sayac=0;
//printf("\n carpan %d",s);
if(a%i==0){
//printf("\n sayinin carpanlari : %d, ",i);
}for(j=2; j<c; j++){
if(c%j!=0){
sayac++;
}
}
if((j-2)==sayac){
printf("\n  asal carpani:%d,",j);
}

}


return 0;
}