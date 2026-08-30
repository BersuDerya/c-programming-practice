//Görevimiz: Kullanıcıdan bir tam sayı alacağız ve sayının pozitif, negatif veya sıfır olduğunu ekrana yazdıracağız.
#include <stdio.h>

int main() {

    int sayi;

    printf("Bir tam sayi giriniz: ");
    scanf("%d", &sayi);

    if(sayi > 0) {
        printf("girdiginiz sayi pozitif\n");
    }
    else if(sayi < 0) {
        printf("girdiginiz sayi negatif\n");
    }
    else {
        printf("girdiginiz sayi sifir\n");
    }

    return 0;
}