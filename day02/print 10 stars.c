/*
looping
print 10 stars
typed a star
added one
CHECK

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int starCtr;
    starCtr = 0;

    star_printer:
         printf("*");
         starCtr += 1;
         if ( starCtr != 10)
             goto star_printer;
}
