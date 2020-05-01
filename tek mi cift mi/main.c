#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("bir sai giriniz.\n");
    scanf("%d",&sayi);
    if(sayi%2==0)
    {
        printf("%d sayisi cifttir.\n",sayi);
    }
    else
    {
        printf("%d sayisi tektir.\n",sayi);
    }
    return 0;
}
