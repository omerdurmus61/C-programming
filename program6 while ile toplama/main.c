#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i=1,toplam=0;
    printf("bir sayi girniz.\n");
    scanf("%d",&sayi);

    while(i<=sayi)
    {
        toplam=toplam+i;

        if(i==sayi)
        {
            printf("%d=%d",sayi,toplam);
        }
        else
        {
            printf("%d+",i);
        }
        i++;
    }



    return 0;
}
