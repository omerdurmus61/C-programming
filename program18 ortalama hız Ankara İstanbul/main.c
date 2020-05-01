#include <stdio.h>
#include <stdlib.h>
#define YOL 450
int main()
{
    float ortalamaHiz,saat;

    printf("Zaman.\n");
    scanf("%f",&saat);
    ortalamaHiz=YOL/saat;
    printf("ortalama hiz= %.2f",ortalamaHiz);
    return 0;
}
