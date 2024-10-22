#include <stdio.h>
#include <stdlib.h>



int main()
{
   float a , y ,z ;
   printf (" enter three number: ");
   scanf ("%f %f %f",&a,&y,&z) ;
   if (a>y)
   {
       if ( a>z)
       {
             printf (" the large no is : %f", a);
       }
   }
   else if (y>z)
   {
       if (y>a)
       {
          printf (" the large no is : %f",y );

       }

   }
    else if (z>a)
   {
       if (z>y)
       {
            printf (" the large no is : %f",z);
       }


   }


}









