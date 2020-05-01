#include <stdio.h>
#include <stdlib.h>

int main()
{

    //ÝÇ ÝÇE ÝF KULLANIMI
    int a,b;

    printf("ilk sayiyi giriniz\n");
    scanf("%d",&a);
    printf("ikinci sayiyi giriniz\n");
    scanf("%d",&b);

    if((a%2)== 0 ){
        printf("a sayisi cift\n");

        }
else {
    printf("a sayisi tek\n");
}
    if((b%2)==0){
        printf("b sayisi cift\n");
    }
    else {
        printf("b sayisi tek");
    }
    return 0;
}
