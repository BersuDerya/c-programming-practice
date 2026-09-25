//Bir cümle alacağız ve kaç kelime olduğunu bulacağız.


#include <stdio.h>
#include <string.h>

int main()
{
    char metin[100];
    int sayac = 1;
    int i;

    printf("Bir cumle girin: ");
    fgets(metin, sizeof(metin), stdin);

    for (i=1; i<strlen(metin); i++)
    {
        if(metin[i] != ' ' && metin[i-1] == ' ') // başta metin[i] == ' ' yapmıştım ama iki boşluk koyduğumuzda kelime sayısını yanlış hesaplıyordu 
        {
            sayac++;
        }
    }

    printf("\n%d kelime bulunuyor\n", sayac);

    return 0;
}