#include <stdio.h>
#include <stdlib.h>



int main()
{
    float r , area , cir ;
    char a ,c ,cho ;
    printf ("enter the radius = \t ");
    scanf ("%f",& r);
    printf("enter \'a for area'\ \' c for circum'\ = \t ");
    scanf (" %c",&cho);
    area=3.14* r * r ;
    cir = 2*3.14*r ;
    if ( cho == 'a')
    {
         printf(" the area is = \t %f ", area) ;
    }
     else if ( cho == 'c')
    {
        printf(" the cir is = \t %f ", cir) ;
    }
    else if ( cho !='a' || cho != 'c')
    {
        printf("error ");
    }

}









