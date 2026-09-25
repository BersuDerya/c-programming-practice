/*boyutunu belirterek, 
boyutunu belirtmeden, 
karakterleri tek tek vererek program yap*/

#include <stdio.h>

int main()
{
    char isim[20]="Bersu";
    char ilce[]="Istanbul";
    char ders[]={'C','P','r','o','g','r','a','m','\0'};

    printf("isminiz %s\n", isim);
    printf("ilce %s\n", ilce);
    printf("ders %s", ders);

    return 0;
}