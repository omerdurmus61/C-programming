#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int faktoriyel = 1;
    int a=0;
    printf("Faktoriyel hesaplama makinesi\n ");
    scanf("%d",&sayi);

    while (a<=sayi)
    {
        faktoriyel = faktoriyel* sayi;
        sayi = sayi-1;
        a++;
    }
       printf("faktoriyeli=%d",faktoriyel);
    return 0;
}
