//Eğer soldaki sağdakinden büyükse yerlerini değiştiriyoruz

#include <stdio.h>

int main()
{
    int i;
    int j;
    int temp;
    int sayi[5];

    printf("bes sayi giriniz: \n");
    for( i=0; i<5; i++)
    {
        scanf("%d",&sayi[i]);
    }

    printf("\ngirilen sayilar:\n");
    for( i=0; i<5; i++)
    {
        printf("%d\t",sayi[i]);
    }

    for(i=0; i<5; i++)// kaç tarama yapıyoruz
    {
        for(j=0; j<4 ; j++) //hangi yan yana sayılara bakıyoruz
        {
            if(sayi[j] > sayi[j+1])
            {
                temp = sayi[j];
                sayi[j] = sayi[j+1];
                sayi[j+1] = temp;
            }
        }
    }
    
    printf("\nSiralama:\n");

    for(i=0 ; i<5 ; i++)
    {
        printf("%d\t", sayi[i]);
    }

    return 0;
}