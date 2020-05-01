#include <stdio.h>
#include <stdlib.h>

int main()
{
    char charDegisken = 'X';
    short int shortIntSayi = 45;
    int intSayi = 24;
    long int longIntSayi = 151;
    long long int longLongIntSayi = 1654564;
    float floatSayi = 2.3;
    double doubleSayi = 7.77;
    long double longDoubleSayi = 3.14159;

    printf ("char tipinin bellek alani: %lu byte \n",sizeof(charDegisken));
    printf ("short int  tipinin bellek alani: %lu byte \n",sizeof(shortIntSayi));
    printf ("int tipinin bellek alani: %lu byte \n",sizeof(intSayi));
    printf ("long int tipinin bellek alani: %lu byte \n",sizeof(longIntSayi));
    printf ("long long int tipinin bellek alani: %lu byte \n",sizeof(longLongIntSayi));
    printf ("float tipinin bellek alani: %lu byte \n",sizeof(floatSayi));
    printf ("char tipinin bellek alani: %lu byte \n",sizeof(charDegisken));
    printf ("double tipinin bellek alani: %lu byte \n",sizeof(doubleSayi));
    printf ("long double tipinin bellek alani: %lu byte \n",sizeof(longDoubleSayi));






    return 0;
}
