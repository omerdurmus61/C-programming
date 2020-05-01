#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamSayi=1254;
    //tamSayi deðiþkeninin bellek adresi isaretci adlý pointera atandý.
    int *isaretci=&tamSayi;

    printf("tamSayi degiskeninin bellekteki adresi %p ",isaretci);
    // %p ile pointer yazdýrýldý.
    return
}
