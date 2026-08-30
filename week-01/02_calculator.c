#include<stdio.h>

int main() {
 float sayi1;
 float sayi2;

printf("Birinci sayiyi giriniz: ");
scanf("%f", &sayi1);

printf("Ikinci sayiyi giriniz: ");
scanf("%f", &sayi2);

printf("Toplam: %.2f\n", sayi1 + sayi2);
printf("Fark: %.2f\n", sayi1 - sayi2);
printf("Carpim: %.2f\n", sayi1 * sayi2);

if (sayi2 != 0) {
    printf("Bolum: %.2f\n", sayi1 / sayi2);
} else {
    printf("Hata: Sifira bolme hatasi!\n");
}
    return 0;
}