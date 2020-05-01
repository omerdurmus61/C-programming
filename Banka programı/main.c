#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand (time(NULL));
    unsigned int bakiye = rand();
    unsigned int cekilecek;

    printf("su anki paraniz %u\n",bakiye);

    printf("Lutfen cekmek istediginiz miktari giriniz\n");
    scanf("%u",&cekilecek);

    if(cekilecek <= bakiye)
    {
        bakiye =bakiye - cekilecek;
        printf("cekilen  para miktari %u\n",cekilecek);
        printf("kalan para miktari %u\n",bakiye);

    }
    else
    {
        printf("Bukadar paraniz yok\n");
    }
    printf("program sonlandi");
    return 0;
}
