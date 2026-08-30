/*1'den kullanıcının verdiği sayıya kadar dön
eğer sayı tekse toplamın içine ekle
döngü bitince toplamı yazdır*/

#include<stdio.h>

int main(){

    int toplam = 0;
    int i,a;

    printf("sayi girin\n");
    scanf("%d",&a);

    for(i=1;i<=a;i++){
        if(i%2!=0){
            toplam = toplam + i;
            printf("%d\n",i);
        }
    }

    printf("toplam: %d",toplam);

    return 0;
}