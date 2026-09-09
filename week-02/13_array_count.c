//Dizide bir sayının kaç kez geçtiğini bulma

#include <stdio.h>

int main()
{

    int sayi[5];
    int i;
    int aranicak;
    int sayac = 0;

    printf("bes sayi girin\n");
    for( i=0; i<5; i++)
    {
        scanf("%d",&sayi[i]);
    }

    printf("\ngirilen sayilar:\n");
    for( i=0; i<5; i++)
    {
        printf("%d\t",sayi[i]);
    }

    printf("\naranmasini istediginiz sayiyi girin\n");
    scanf("%d",&aranicak);
    for( i=0; i<5; i++)
    {
        if(sayi[i] == aranicak)
        {
            sayac++;
        }
    }
    printf("dizide %d kez gecmis\n",sayac);

    return 0;
}