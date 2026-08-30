//while ile 1'den N'e kadar toplam

#include<stdio.h>

int main(){

int i = 1;
int a;
int toplam = 0;

printf("bir sayi girin: ");
scanf("%d", &a);

while(i <= a){
    printf("%d\n",i);
    toplam = toplam + i;
    i++;
}
printf("%d\n",toplam);

return 0;

}