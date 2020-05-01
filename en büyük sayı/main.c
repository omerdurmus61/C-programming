#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2,sayi3;
    printf("uc adet sayi giriniz.\n");
    scanf("%d%d%d",&sayi1,&sayi2,&sayi3);

    if(sayi1>sayi2)
    {
        if(sayi1>sayi3)
        {
            printf("%d en buyuk sayi",sayi1);
        }
        else
        {
            printf("%d en buyuk sayi",sayi3);
        }
    }
    else
    {
        if(sayi2>sayi3)
        {
            printf("en buyuk sayi %d",sayi2);
        }
        else
        {
             printf("en buyuk sayi %d",sayi3);
        }
    }
    return 0;
}
