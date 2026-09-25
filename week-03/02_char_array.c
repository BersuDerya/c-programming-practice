/*char isim[]oluştur.
İçine kendi adını yaz.
Sonra program:
İsmin tamamını %s ile yazdırsın.
İsmin ilk harfini %c ile yazdırsın.
İsmin son harfini %c ile yazdırsın*/

#include <stdio.h>

int main()
{
    char isim[]="bersu";

    printf("isim: %s\n",isim);
    printf("ilk harf: %c\n",isim[0]);
    printf("son harf: %c\n",isim[4]);
    
    return 0;
}