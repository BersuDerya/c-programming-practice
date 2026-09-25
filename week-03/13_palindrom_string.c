//Kelime tersten de düzden de aynı okunuyorsa palindrom. kelime polindrom mu değil mi kontrol et

#include <stdio.h>
#include <string.h>

int main()
{
    char metin[] = "ada";
    int sol = 0;
    int sag = strlen(metin)-1;
    int i;
    int palindrom = 1;

    for( i=0; i<strlen(metin)/2; i++)
    {
        if(metin[sol] != metin[sag])
        {
            palindrom = 0;
        }

        sol++;
        sag--;
    }

    if( palindrom == 1)
    {
        printf("Palindromdur");
    }
    else
    {
        printf("Palindrom degildir");
    }

    return 0;

}