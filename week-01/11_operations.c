#include<stdio.h>

int main() {

    int sayi1, sayi2, sayi3;
    int toplam, fark;
    float ortalama;
    int buyuk;
    int kucuk;

    printf(" bir sayi girin:");
    scanf("%d",&sayi1);
    printf(" ikinci sayi girin:");
    scanf("%d",&sayi2);
    printf(" ucuncu sayi girin:");
    scanf("%d",&sayi3);

    printf("1. sayi: %d\n",sayi1);
    printf("2. sayi: %d\n",sayi2);
    printf("3. sayi: %d\n",sayi3);

    toplam = sayi1 + sayi2 + sayi3;
    printf("sayilarin toplami: %d\n",toplam);

    ortalama = toplam / 3.0;
    printf("sayilarin ortalamasi: %.2f\n",ortalama);

   if(sayi1 >= sayi2 && sayi1 >= sayi3){
    buyuk = sayi1;
} 
else if(sayi2 >= sayi1 && sayi2 >= sayi3){
    buyuk = sayi2;
}
else{
    buyuk = sayi3;
}

    if(sayi1 <= sayi2 && sayi1 <= sayi3){
    kucuk = sayi1;
}
else if(sayi2 <= sayi1 && sayi2 <= sayi3){
    kucuk = sayi2;
}
else{
    kucuk = sayi3;
}
   fark = buyuk - kucuk ;
   printf("fark: %d",fark);

    return 0;



}