#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aci1,aci2,aci3;


    do
     {
    printf("Ucgen olusturacak uc aci giriniz.\n");
    scanf("%d%d%d",&aci1,&aci2,&aci3);
    if(aci1+aci2+aci3!=180)
        {
        printf("Ucgenin ic acilari toplami 180 derece olmalidir.\n");
        }
    }
    while(aci1+aci2+aci3!=180);


    if(aci1==aci2&&aci2==aci3)
    {
        printf("Eskenar ucgen.\n");
    }
    else if(aci1==aci2 && aci1!=aci3 || aci1==aci3 && aci1!=aci2 || aci3==aci2 && aci3!=aci1)
    {
        printf("ikizkenar ucgen.\n");
    }
    else if (aci1!= aci2 && aci1!= aci3 && aci2!= aci3)
    {
        printf("Cesitkenar ucgen.\n");
    }

    return 0;
}
