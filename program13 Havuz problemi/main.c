#include <stdio.h>
#include <stdlib.h>

int main()
{
    float en,boy,yukseklik,hacim;
    printf("En,boy ve yukseklik degerlerinin giriniz.\n");
    scanf("%f%f%f",&en,&boy,&yukseklik);

    printf("Havuzun dolmasi icin %.2fm^3 su lazim.",en*boy*yukseklik);

    return 0;
}
