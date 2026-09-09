//5 sayi al kaç + kaç - kaç 0 olduğunu bul

#include <stdio.h>

int main()
{
    int sayi[5];
    int pozitif;
    int negatif;
    int sifir;
    int i;

    printf("5 sayi girin\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&sayi[i]);
    }

    printf("girilen sayilar\n");

    for(i=0;i<5;i++)
    {
        printf("%d\t",sayi[i]);
    }
    pozitif = 0;
    negatif = 0;
    sifir = 0;

    for(i=0;i<5;i++)
    {
        if(sayi[i]>0)
        {
            pozitif++;
        }
        else if (sayi[i]<0)
        {
            negatif++;
        }
        else
        {
            sifir++;
        }
    }

    printf("\npozitif sayilar: %d tane, negatif sayilar: %d tane sifir: %d tane\n",pozitif,negatif,sifir);

    return 0;

}