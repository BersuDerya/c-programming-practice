/*Kullanıcıdan 5 sayı al. Sonra dizinin:
ilk elemanını → sayi[0]
son elemanıyla → sayi[4]
yer değiştir. Sonra yeni diziyi ekrana yazdır*/

#include <stdio.h>

int main()
{
    int sayi[5];
    int i;
    int temp; // ilk degeri gecici olarak saklaması için 

    printf("bes sayi giriniz: \n");
    for( i=0; i<5; i++)
    {
        scanf("%d",&sayi[i]);
    }

    printf("\ngirilen sayilar:\n");
    for( i=0; i<5; i++)
    {
        printf("%d\t",sayi[i]);
    }

    temp = sayi[0];
    sayi[0] = sayi[4];
    sayi[4] = temp;
    
    printf("\nyeni dizi degerleri:\n");
    for( i=0; i<5; i++)
    {
        printf("%d\t",sayi[i]);
    }
    return 0;
}