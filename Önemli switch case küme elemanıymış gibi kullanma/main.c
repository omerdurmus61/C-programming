#include <stdio.h>
#include <stdlib.h>

int main()
{   while(1==1)

{


    int gun;
    printf("Lutfen bir gun degeri girin [1,7] araliginda.\n");
    scanf("%d",&gun);

    switch(gun)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: printf("Hafta ici.\n");
        break;
        case 6:
        case 7: printf("Hafta sonu.\n");
        break;
        default: printf("Hatali giris.\n");
        break;
    }
}

    return 0;

}
