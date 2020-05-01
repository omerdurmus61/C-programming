#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,h;
    printf("Prizmanin taban olculerini ve yuksekligini giriniz.\n");
    scanf("%d%d%d",&a,&b,&h);

    printf("Taban alani=%d\n",a*b);
    printf("Yanal alanlar toplami=%d\n",2*h*a+2*h*b);
    printf("Toplam alani=%d\n",2*h*a+2*h*b+2*a*b);
    printf("Hacim=%d",a*b*h);

    return 0;
}
