#include <stdio.h>
#include <stdlib.h>

int main(){
    int aranan_sayi;
    int sayilar[10] = {3,5,8,23,7,45,9,1,53,75};
    printf("aradiginiz sayiyi giriniz: ");
    scanf("%d",&aranan_sayi);
    int i;
    for(i = 0 ; i < 10 ; i++){
        if(sayilar[i] == aranan_sayi){
            printf("Bulundu girdiginiz sayi dizinin %d. indisi",i);
            break;
        }
    }




    return 0;






}
