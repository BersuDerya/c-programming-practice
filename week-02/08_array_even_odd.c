//5 sayi al, kaçı çift kaçı tek bul

#include <stdio.h>

int main()
{
    int sayi[5];
    int i;
    int cift;
    int tek;

    printf("5 sayi girin\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&sayi[i]);
    }

    printf("\ngirilen sayilar\n");

    for(i=0;i<5;i++)
    {
        printf("%d\n",sayi[i]);
    }

    cift = 0;
    tek = 0;

    for(i=0;i<5;i++)
    {
        if(sayi[i] % 2 == 0)
        {
            cift++;
        }
        else 
        {
            tek++;
        }
    }
    printf("cift sayi:%d , tek sayi:%d\n",cift,tek);

    return 0;
}