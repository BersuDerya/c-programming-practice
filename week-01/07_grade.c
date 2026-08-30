/*vize ve final notunu alacağız.
Ortalama:
Vize × 0.40 + Final × 0.60

Sonra:Ortalama 50 veya üzeriyse → Gectiniz
50'nin altındaysa → Kaldiniz */

#include<stdio.h>

int main() {

    float vize;
    float final;
    float ortalama;

    printf("vizeyi girin\n");
    scanf("%f",&vize);

    printf("finalinizi girin\n");
    scanf("%f",&final);

    ortalama = (vize * 0.40) + (final * 0.60);

    printf("ortalamaniz %.2f\n",ortalama);

    if(ortalama < 50){
        printf("KALDINIZ\n");
    }
    else{
        printf("Gectiniz\n");
    }

    return 0;


}