//kullanıcıdan 3 tane tam sayı alacağız ve hangisinin en büyük olduğunu bulacağız.

#include <stdio.h>

int main() {

    int sayi1, sayi2, sayi3;

    printf("sayi giriniz\n");
    scanf("%d",&sayi1);

    printf("ikinci sayinizi girin\n");
    scanf("%d",&sayi2);

    printf("ucuncu sayinizi girin\n");
    scanf("%d",&sayi3);

    if(sayi1>sayi2 && sayi1>sayi3) {
        printf("sayi 1 en buyuk\n");
    }
    else if(sayi2>sayi1 && sayi2>sayi3){
        printf("sayi2 en buyuk\n");
    }
     else if(sayi3>sayi1 && sayi3>sayi2){
        printf("sayi3 en buyuk\n");
    }
    else{
        printf("ucude esittir\n");
    }



    return 0;
}