/*Kullanıcıdan bir sayı alacağız.
for ile 1'den o sayıya kadar gideceğiz.
Sayının çift olup olmadığını nasıl kontrol ediyorduk?
Çiftse toplama ekleyeceğiz.*/

#include<stdio.h>

int main(){

    int i,a;
    int toplam = 0;
    
    printf("sayi giriniz\n");
    scanf("%d",&a);

    for(i=0;i<=a;i++){
        if(i%2==0){
            toplam = toplam + i;
             printf("%d\n",i);
        }
       
    }
    printf("toplam = %d",toplam);

return 0;
}

