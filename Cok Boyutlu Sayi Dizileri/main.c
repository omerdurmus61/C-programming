#include <stdio.h>
#include <stdlib.h>

int main()
{
    int can[2][2]={{4,6},{2,3}};
    //4 elemanýný basmak için dizinin ilk elemaný 0.indistir.
    printf("%d\n",can[0][0]);
    //6 elemanýný basmak için dizinin ilk elemaný 1.indistir.
    printf("%d\n",can[0][1]);

    printf("%d\n",can[1][0]);

    printf("%d\n",can[1][1]);
    return 0;
}
