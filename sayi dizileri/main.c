#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int dizi[5];
    while(i<5)
    {
        printf("Dizinin %d.elemanini giriniz.\n",i+1);
        scanf("%d",&dizi[i]);
        if(dizi[i]%2==0)
        {
            printf("Lutfen %d.elemani tek sayi olarak tekrar giriniz.\n",i+1);
            continue;
        }
        i++;
    }
    printf("----------------------\n");
    printf("DIZINI ELEMANLARI\n");
    printf("----------------------\n");
    for(i=0;i<5;i++)
    {
        printf("Dizinin %d.elemani = %d\n",i+1,dizi[i]);
    }

    return 0;
}
