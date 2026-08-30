#include<stdio.h>

int main() {
    int sayi;

    printf("bir sayi girin\n");
    scanf("%d", &sayi);

    if (sayi % 2 == 0) {

        printf("sayi cift\n");

    } else {

        printf("sayi tektir\n");

    }

    return 0;
}
