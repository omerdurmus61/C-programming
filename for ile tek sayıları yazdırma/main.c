#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("bir sayi giriniz.\n");
    scanf("%d",&sayi);
    printf("1 den %d sayisina kadar olan tek sayilar.\n",sayi);
    int i;
    for(i=1;i<=sayi;i+=2)
    {
        printf("%d\n",i);
    }
    return 0;
}
