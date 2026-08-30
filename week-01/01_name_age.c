#include<stdio.h>

int main() {

    char isim[20];
    int yas;

    printf("isminizi giriniz: ");
    scanf("%s", isim);

    printf("yasinizi giriniz: ");
    scanf("%d", &yas);

    printf("merhaba %s! %d yasindasin.\n", isim, yas);

    return 0;
}