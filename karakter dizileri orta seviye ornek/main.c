#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   char cumle[100];
    printf("Bir metin giriniz.\n");
    gets(cumle);
    int i=0,sayac=0;

    while(sayac<=strlen(cumle))
    {
        for(int i=0;i<sayac;i++)
        {
            printf("%c",cumle[i]);
        }
        sayac++;
        printf("\n");
    }

    return 0;
}
