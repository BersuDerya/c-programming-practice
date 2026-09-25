// metini ters çevirme

#include <stdio.h>
#include <string.h>

int main()
{
    char metin[] = "Bersu";
    int i;
    
    printf("Metin: %s\n", metin);
    for(i=strlen(metin)-1; i>=0; i--)
    {
        printf("%c",metin[i]);
    }

    return 0;
}