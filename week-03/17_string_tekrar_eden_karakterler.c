//Kullanıcıdan bir string alacağız ve birden fazla kez geçen karakterleri bulacağız.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char metin[100];
    int i,j,k;
    int sayac = 1;
    int dahaoncevar = 0;

    printf("Bir metin girin:\n");
    fgets(metin, sizeof(metin), stdin);

    for(i=0; i<strlen(metin); i++)
    {
        sayac = 1;
        dahaoncevar = 0; 

        for(k=0; k<i; k++)  // karakteri daha önce görüp görmediğimizi kontrol etmeliyiz
        {
            if(tolower(metin[i]) == tolower(metin[k]))
            {
                dahaoncevar = 1;
                break;
            }
            
        }

        if( dahaoncevar == 0)
        {
            for(j=i+1; j<strlen(metin); j++) //ileriye bakıp tekrar sayıları buluyo
            {
                if(tolower(metin[i]) == tolower(metin[j]))
                {
                    sayac++;
                }
            }

            if(sayac > 1)
            {
                printf("%c %d kez tekrarlandi\n",metin[i],sayac);
            }
        }

    }

    return 0;
}