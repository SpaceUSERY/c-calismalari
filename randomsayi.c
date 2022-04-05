// %20 ihtimalle 1 ile 10 arasında sayı üreten bir program yazacaksın

#include<time.h>
#include<stdlib.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int ihtimalyirmi,yuzdelik,ihtimalseksen;
    srand(time(NULL)); 
    yuzdelik=rand()%100;
    if (yuzdelik<=20)
    {
        ihtimalyirmi=rand()%10;
        printf("%d",ihtimalyirmi);
    }
        if (yuzdelik<100&& yuzdelik>20)
    {
        ihtimalseksen=rand()%100;
        printf("%d",ihtimalseksen);
    }

}

