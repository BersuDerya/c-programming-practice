/*Kullanıcıdan bir karakter al.
Program:
Karakteri ekrana yazdırsın.
Karakterin ASCII değerini yazdırsın.
Karakterin büyük harf mi, küçük harf mi, rakam mı olduğunu söylesin.*/

#include <stdio.h>

int main()
{
    char harf;

    printf("bir karakter girin\n");
    scanf("%c", &harf);

    printf("%d\n", harf);

    if (harf >= 'A' && harf <= 'Z')
    {
        printf("Buyuk harf");
    }
    else if (harf >= 'a' && harf <= 'z')
    {
        printf("Kucuk harf");
    } 
    else
    {
       printf("harf degil");
    }

        return 0;
}