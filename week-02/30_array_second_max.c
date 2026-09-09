//İkinci En Büyük Elemanı Bul

#include <stdio.h>

int main()
{
    int A[7]={10, 25, 7, 40, 15, 32, 5};
    int max;
    int ikinciMax;
    int i;

    max = A[0];
    ikinciMax = A[1];

    for(i=1; i<7; i++)
    {
        if(A[i] > max)
        {
            ikinciMax = max;
            max = A[i];
        }
        else if(A[i] < max && A[i] > ikinciMax)
        {
            ikinciMax = A[i];
        }
        
    }

    printf("En buyuk sayimiz: %d\n",max);
    printf("Ikinci en buyuk sayimiz: %d",ikinciMax);

    return 0;
}