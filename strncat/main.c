#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char dizi1[100];
    char dizi2[100];
    int i;

    printf("Lutfen bir yazi metini giriniz.\n");
    gets(dizi1);
    printf("%s\n",dizi1);

  /*  printf("Lutfen bir yazi metni giriniz.\n");
    scanf("%s",&dizi2);
    printf("%s",dizi2); */

    printf("Bir metin daha giriniz.\n");
    gets(dizi2);
    printf("%s\n",dizi2);

    printf("Birinci metine kac adet karakter eklenecek.\n");
    scanf("%d",&i);

    printf("Onceki hali\n%s",dizi1);

    printf("\nBirlestirme isleminden sonra\n");
    strncat(dizi1,dizi2,i);

    printf("%s",dizi1);

    return 0;
}
