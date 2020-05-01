#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[100][100]={"bir",{'i','k','i','\0'},"uc","dort"};

    //dizinin 4.elemanýnýn 3.karakterini bastýralým.
    //karakter dizileri de indis þeklindedir.
    printf("Dizinin 4.elemani=%s\nBu elemanin 3.karakteri=%c",dizi[3],dizi[3][2]);

    return 0;
}
