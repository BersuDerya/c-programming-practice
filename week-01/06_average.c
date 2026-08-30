//kullanıcıdan 3 tane sayı alıp ortalamasını bulacağız.

#include <stdio.h>

int main() {


    float sayi1;
    float sayi2;
    float sayi3;
    float sayim;


    printf("birinci sayiyi girin\n");
    scanf("%f",&sayi1);

    printf("ikinci sayiyi girin\n");
    scanf("%f",&sayi2);

    printf("ucuncu sayiyi girin\n");
    scanf("%f",&sayi3);

    sayim = (sayi1 + sayi2 + sayi3) / 3 ;

    printf("ortalama: %2.f\n",sayim);

return 0 ;

}