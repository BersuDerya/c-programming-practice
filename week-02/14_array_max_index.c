//Kullanıcıdan 5 sayı al ve dizideki en büyük sayının hangi indexte olduğunu bul.

#include <stdio.h>

int main()
{
 int sayi[5];
 int i;
 int max;
 int max_index = 0;
 
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

 max = sayi[0];
 for( i=0; i<5; i++)
 {
    if(max < sayi[i])
    {
        max = sayi[i];
        max_index = i;
    }
 }
 printf("\nmax sayi: %d , max indeksi: %d",max,max_index);
}