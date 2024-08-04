#include<stdio.h>
#include<stdlib.h>
int main()
{
     long long int num;
     long long int cf;
     long long int fpf;
     num = 1234567890;
     num = 9007199254740991L;
     for( fpf = 2;  1 ; fpf  +=1)
     {
         if ( num % fpf == 0)
         {
              printf("%lld ", fpf);
              break;
         }
     }
     long long int until;
     until = (num/fpf);
     for( cf = fpf + 1; cf <= until ; cf +=1)
     {
         if ( num % cf == 0)
              printf("%lld ", cf);
     }

     printf("%d", num);


     return EXIT_SUCCESS;
}
