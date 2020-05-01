#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("Bir sayi giriniz.\n");
    scanf("%d",&sayi);
    printf("%d sayisina kadar olan 3 un kati olan sayilar.\n",sayi);
    int i=1;
    do
    {
        if(i%3==0)
        {
            printf("%d\n",i);
        }
        i++;
    }
    while(i<=sayi);
    return 0;
}
