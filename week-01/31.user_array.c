//Kullanıcıdan 5 sayı alıp Array'e doldurma

#include <stdio.h>

int main()
{
    int sayilar[5];

    for(int i = 0;i<5;i++){
        printf("%d. sayiyi gir: ", i + 1);
        scanf("%d", &sayilar[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("%d\n", sayilar[i]);
    }

    return 0;
}