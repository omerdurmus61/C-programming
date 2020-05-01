#include <stdio.h>
#include <stdlib.h>

int main()
{   int sayi1,sayi2;
    printf("iki adet sayi giriniz\n");
    scanf("%d",&sayi1);
    scanf("%d",&sayi2);
    printf("%d sayisinin %d ile bolumunden kalan %d",sayi1,sayi2,sayi1%sayi2);
    return 0;
}
