//Her Elemanın Kaç Kez Tekrarlandığını Bul

#include <stdio.h>

int main()
{
    int A[7]={1, 2, 2, 3, 3, 3, 4};
    int i,j;
    int sayac;
    int tekrar;

    printf("her eleman kac kez var:\n");

    for(i = 0; i < 7; i++)
    {
        tekrar = 0;

        // Daha önce bu elemanı gördük mü?
        for(j = 0; j < i; j++)
        {
            if(A[i] == A[j])
            {
                tekrar = 1;
                break;
            }
        }

        // Daha önce görmediysek sayısını bul
        if(tekrar == 0)
        {
            sayac = 0;

            for(j = 0; j < 7; j++)
            {
                if(A[i] == A[j])
                {
                    sayac++;
                }
            }

            printf("%d -> %d kez\n", A[i], sayac);
        }
    }

    
    return 0;


    /*for(i=0; i<7; i++)
    {
        sayac=0;
        for(j=0; j<7; j++)
        {
            if(A[i]==A[j])
            {
                sayac++;

            }
        }
        printf("%d sayisi %d kez tekrarlanmis\n", A[i], sayac);
        çıktısı:1 sayisi 1 kez tekrarlanmis
        2 sayisi 2 kez tekrarlanmis
        2 sayisi 2 kez tekrarlanmis
        3 sayisi 3 kez tekrarlanmis
        3 sayisi 3 kez tekrarlanmis
        3 sayisi 3 kez tekrarlanmis
        4 sayisi 1 kez tekrarlanmis oluyordu
    }*/

}