#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sayi1= 3221.22;
    float sayi2= 23.4;
    float sayi3= 64568.23;

    printf("Normal Gosterim\n-------------------------\n");
    printf("%.2f = sayi1\n",sayi1);
    printf("%.2f = sayi2\n",sayi2);
    printf("%.2f = sayi3\n",sayi3);

    printf("Saga dayali Gosterim\n-------------------------\n");
    printf("%10.2f = sayi1\n",sayi1);
    printf("%10.2f = sayi2\n",sayi2);
    printf("%10.2f = sayi3\n",sayi3);

    printf("sola dayali Gosterim\n-------------------------\n");
    printf("%-10.2f = sayi1\n",sayi1);
    printf("%-10.2f = sayi2\n",sayi2);
    printf("%-10.2f = sayi3\n",sayi3);

    return 0;
}
