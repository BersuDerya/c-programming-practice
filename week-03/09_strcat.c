//birleştirmek

#include<stdio.h>
#include <string.h>

int main()
{
    char isim[30] = "Bersu";
    char soyisim[] = " DERYA";

    strcat(isim, soyisim);
    printf("%s", isim);
    return 0;
}