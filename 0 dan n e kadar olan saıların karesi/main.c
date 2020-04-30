#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,sayi;
    printf("bir sayi giriniz.\n");
    scanf("%d",&sayi);

    while(i<=sayi)
    {
        printf("%d sayisiin karesi %d\n",i,i*i);
        i++;
    }

    return 0;
}
