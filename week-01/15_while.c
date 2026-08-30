/*while mantığı.Kullanıcıdan bir sayı alacağız
 ve 1'den o sayıya kadar sayıları yazdıracağız.*/

#include<stdio.h>

int main(){

    int i=0;
    int a;

    printf("bir sayi girin\n");
    scanf("%d",&a);

    while(i<=a){
        printf("%d\n",i);
        i++;
    }

return 0;


}