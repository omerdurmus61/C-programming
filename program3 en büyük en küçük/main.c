#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2,sayi3;
    int min,max;

    printf("uc sayi giriniz.\n");
    scanf("%d%d%d",&sayi1,&sayi2,&sayi3);

    max=sayi1;

    if(sayi2>max)
    {
        max=sayi2;
    }
    if(sayi3>max)
    {
        max=sayi3;
    }
    printf("En buyuk deger = %d\n",max);

    min=sayi1;

    if(sayi2<min)
    {
        min=sayi2;
    }
    if(sayi3<min)
    {
        min=sayi3;
    }

    printf("En kucuk deger = %d",min);

    return 0;
}
