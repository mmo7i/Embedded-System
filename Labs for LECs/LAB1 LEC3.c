#include <stdio.h>
#include <stdlib.h>



int main()
{
   float a , y ,z ;
   printf (" enter three number: ");
   scanf ("%f %f %f",a,y,z) ;
   if ( a < y)
   {
       printf (" the large no is : %f", y);

   }
   else if (y<z)
   {
        printf (" the large no is : %f", z);

   }
    else if (a<z)
   {
        printf (" the large no is : %f",a);

   }


}









