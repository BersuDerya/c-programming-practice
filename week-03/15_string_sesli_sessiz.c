//metindeki sesli sessiz harfleri say

#include <stdio.h>
#include <string.h>
#include <ctype.h>  // isalpha için 

int main()
{
    char metin[100];
    int i;
    int sesli = 0;
    int sessiz = 0;
    

    printf("Bir metin girin:\n");
    fgets(metin, sizeof(metin), stdin);

    for(i=0; i<strlen(metin); i++)
    {
        if(isalpha(metin[i])) // metinde sadece harflere bakmamızı sağlar boşluk noktalamaları saymaz
        {
        if(tolower(metin[i]) == 'a' || 
         tolower(metin[i]) == 'e' ||
         tolower(metin[i]) == 'i' ||
         tolower(metin[i]) == 'o' ||
         tolower(metin[i]) == 'u') // tolower buyuk harfi kucuk harfe dönüştürüyo böylece büyük harfleri yazmamıza gerek olmadan saydırabiliyoruz 
        {
            sesli++;
        }
        else
        {
            sessiz++;
        }
        }
    }
    printf("Sesli harf: %d\n", sesli);
    printf("Sessiz harf: %d\n", sessiz);

    return 0;
}