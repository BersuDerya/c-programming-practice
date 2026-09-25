/*Kullanıcıdan bir cümle alacağız ve programımız şunları yapacak:
1. Kelime sayısını bulacak
2. Sesli harf sayısını bulacak
3. Sessiz harf sayısını bulacak
4. Metni tamamen büyük harfle gösterecek
5. Metni tamamen küçük harfle gösterecek*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char metin[200];
    int i;
    int sayac = 1;
    int sesli = 0;
    int sessiz = 0;
    char buyuk[200];
    char kucuk[200];

    printf("Bir cümle giriniz:\n");
    fgets(metin, sizeof(metin), stdin);

    for(i=1; i<strlen(metin); i++)
    {       
        if(metin[i] != ' ' && metin[i-1] == ' ')
        {
            sayac++;
        }
    }

    printf("%d kelime bulunuyor\n",sayac);

    for(i=0; i<strlen(metin); i++)
    {
        if(isalpha(metin[i]))
        {
            if(tolower(metin[i]) == 'a' || tolower(metin[i]) == 'e' || tolower(metin[i]) == 'i'|| tolower(metin[i]) == 'o'|| tolower(metin[i]) == 'u')
            {
                sesli++;
            }
            else
            {
                sessiz++;
            }
        }
    }
    printf("Sesli: %d\n", sesli);
    printf("Sessiz: %d\n", sessiz);

    for(i = 0; i<strlen(metin); i++)
    {
        buyuk[i]= toupper(metin[i]);
        kucuk[i]= tolower(metin[i]);
    }
    buyuk[i] = '\0';
    kucuk[i] = '\0';
    
    printf("Buyuk: %s", buyuk);
    printf("kucuk: %s", kucuk);

    return 0;
}