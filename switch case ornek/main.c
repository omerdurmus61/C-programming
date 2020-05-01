#include <stdio.h>
#include <stdlib.h>

int main()
{
    char harf;
    printf("bir harf iriniz.\n");
    scanf("%c",&harf);

    switch(harf)
    {
        case 'b':
        case 'B': printf("bursa spor\n");
        break;
        case 't':
        case 'T': printf("trabzon spor\n");
        break;
        case 'f':
        case 'F': printf("fenerbahce\n");
        break;
        case 'g':
        case 'G': printf("galatasaray\n");
        break;
        default:
            printf("hatali giris.");
    }

    return 0;
}
