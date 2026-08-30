/*Kullanıcıdan:
Birinci sayıyı al
İkinci sayıyı al
İşlemi seçmesini iste:+,-,*,/
Sonucu ekrana yazdır.*/

#include <stdio.h>

int main(){

    float sayi1,sayi2;
    char islem;

    printf("bir sayi girin\n");
    scanf("%f",&sayi1);

    printf("ikinci sayiyi girin\n");
    scanf("%f",&sayi2);

    printf("operator girin\n");
    scanf(" %c",&islem);

    switch(islem){
        case '+': printf("%f + %f = %f",sayi1,sayi2,sayi1+sayi2);
        break;
        case '-': printf("%f - %f = %f",sayi1,sayi2,sayi1-sayi2);
        break;
        case '*': printf("%f * %f = %f",sayi1,sayi2,sayi1*sayi2);
        break;
        case '/': printf("%f / %f = %f",sayi1,sayi2,sayi1/sayi2);
        break;
        default : printf("hatali giriş\n");

    }


 return 0;
}