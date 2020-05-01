#include <stdio.h>
#include <stdlib.h>
#define METREKARE 40
#define ISCILIK 200
int main()
{
    float birim,ucret;

    printf("Kac metre kare dosenecek.\n");
    scanf("%f",&birim);
    ucret=birim*METREKARE+200;
    printf("ucret=%.2f",ucret);


    return 0;
}
