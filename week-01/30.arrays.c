// 5 elemanlı arrays oluşturup for döngüsüyle ekrana yazdırıcaz.

#include <stdio.h>

int main(){

    int sayilar[5] = {10, 25, 7, 42, 18};

    for(int i = 0; i < 5; i++){
        printf("%d\n", sayilar[i]);
    }

    return 0;
}