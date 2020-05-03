#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[5];

    printf("Dizinin elemanlarini giriniz.\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&dizi[i]);
    }

    printf("cift sayilar: ");
    for(int j=0;j<5;j++)
    {
        if(dizi[j]%2==0)
        {
            printf("%3d",dizi[j]);
        }

    }

    printf("\ntek sayilar: ");
    for(int j=0;j<5;j++)
    {
        if(dizi[j]%2!=0)
        {
            printf("%3d",dizi [j]);
        }

    }

    return 0;
}
