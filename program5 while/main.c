#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("bir sayi giriniz.\n");
    scanf("%d",&sayi);

    while (sayi>=0)
    {
        printf("%4d",sayi);
        sayi-=1;
    }
    return 0;
}
