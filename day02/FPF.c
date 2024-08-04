#include<stdio.h>
#include<stdlib.h>
int main()
{
     long long int num;
     long long int cf;
     long long until;
     //int fpf;
     num = 1234567890;
     num = 9007199254740991L;
     until = ( num / 2);
     for( cf = 1; cf <= until ; cf +=1)
     {
         if ( num % cf == 0)
              printf("%lld ", cf);
     }
     printf("%lld", num);


     return EXIT_SUCCESS;
}
