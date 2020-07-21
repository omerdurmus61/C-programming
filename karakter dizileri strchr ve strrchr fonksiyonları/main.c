#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char denemeDizi[]="soldan arama b siniri , sagdan arama b siniri";

    //strchr fonksiyonu aramaya soldan baslar ve buldugu yerin bellek adresini döndürür.
    char* p1 = strchr(denemeDizi,'b');
    //strrchr fonksiyonu aramaya sondan baslar ve buldugu yerin bellek adresini döndürür.
    char* p2 = strrchr(denemeDizi,'b');

    puts(p1);
    puts(p2);


    return 0;
}
