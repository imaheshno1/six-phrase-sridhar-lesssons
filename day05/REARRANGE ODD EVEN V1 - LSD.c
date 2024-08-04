// if (TRUE )
// 0 false
// not false  -> true
// not   0    -> true

// if ( true -> boolean )
#include<stdio.h>
#include<stdlib.h>
int main()
{

   int num;
   int copy_num;
   int evenGroup;
   int oddGroup;
   int evenPower;
   int oddPower;
   int digit;
   int res;
   num = 1234567890;
   num = 1030221289;
   evenGroup = 0;
   oddGroup  = 0;
   evenPower = 1;
   oddPower = 1;

   copy_num = num;
   while ( copy_num ) // while ( copy_num != 0 )
   {
       digit = copy_num % 10;
       if ( digit % 2 == 0)
       {
           evenGroup += (digit * evenPower);
           evenPower *= 10;
       }
       else
       {
           oddGroup += ( digit * oddPower );
           oddPower *= 10;
       }
       copy_num /= 10;
   }
   res = oddGroup * evenPower + evenGroup;
   printf("num = %d, res = %d\n", num, res);



    return EXIT_SUCCESS;
}
