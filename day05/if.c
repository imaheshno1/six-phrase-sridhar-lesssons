
#include<stdio.h>
#include<stdlib.h>
int main()
{

   if ( 1 )
        printf("(1) is Accepted as TRUE\n");
   if ( -1  )
        printf("(-1) is Accepted as TRUE\n");
    if ( 22/7 )
        printf("(22/7) is Accepted as TRUE\n");
   if ( 3.1415926 )
        printf("(3.1415926) is Accepted as TRUE\n");
   if ( 'S' )
        printf("('S') is Accepted as TRUE\n");
   if ( "POPO" )
        printf("(\"POPO\") is Accepted as TRUE\n");
   if ( printf("vava\n"))
         printf("(printf(\"vava\n\") is Accepted as TRUE\n)");
   if ( 0 )
       printf("Will not be seen on Screen\n");
   else
       printf("Will BE  seen on Screen\n");

   if ( 0.00001 )
       printf("(0.000001) Will be seen on Screen\n");
   else
       printf("Will NOT BE  seen on Screen\n");
    if ( 7/22 )
        printf("(7/22) is Accepted as TRUE\n");
        printf("trying %f", 7.0/22);




    return EXIT_SUCCESS;
}
