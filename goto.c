#include <stdio.h>
int main()
{
    int a = 1478;
    printf("%d", a);
    a = 17;
emre:
{
    printf("yeni a :%d\n ", a);
    if (a == 17)
    {
        a = 19;
        goto emre;
    }
    else
    {
        goto basak;
    }

basak:
    printf("gotolu a : %d", a);
}
    return 0;
}
