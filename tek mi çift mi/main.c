#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("bir sayi giriniz\n");
    scanf("%d",&sayi);
    if(sayi % 2 == 0)
    {
        printf("sayi cift\n");
    }
    else{
        printf("sayi tek\n");
    }
    return 0;
}
