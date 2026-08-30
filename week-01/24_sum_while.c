/*Kullanıcı bir sayı girecek, biz 1’den o sayıya kadar olan 
sayıların toplamını while ile bulacağız.*/

#include<stdio.h>

int main(){

    int sayi;
    int toplam = 0;
    int i = 1;

    printf("sayi girin\n");
    scanf("%d", &sayi);

   while (i <= sayi) {
    
    toplam = toplam + i;
    
    i++;
}

    printf("toplam: %d",toplam);

    return 0;


}