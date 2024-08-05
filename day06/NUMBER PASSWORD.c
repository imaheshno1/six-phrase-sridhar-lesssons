#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//#define debug
typedef long long int lli;
int main()
{

   lli num;
   lli res;
   lli first_part;
   lli mid_part;
   lli third_part;
   lli first_power;
   lli third_power;
   lli copy;

   int nod;
   int fp;
   int sp;
//       1234567890123
   num = 7899234516431LL;
   fp = 3;
   sp = 10;


   copy = num;
   nod = 0;
   while ( copy )
   {
       nod += 1;
       copy /= 10;
   }
   #ifdef debug
   printf("nod = %d\n", nod);
   #endif // debug
   first_power = pow(10, (nod-fp+1));
   third_power = ceil ( pow(10, (nod-sp)) );
   #ifdef debug
   printf("fp = %lld, tp = %lld\n", first_power, third_power);
   #endif // debug
   first_part = num / first_power;
   mid_part = ( num % first_power) / third_power;
   third_part = ( num % third_power);
   #ifdef debug
   printf("first = %lld, mid = %lld, third = %lld\n", first_part, mid_part, third_part);
   #endif // debug
   lli rev_mid_part;
   rev_mid_part = 0;
   copy = mid_part;
   while ( copy )
   {
       rev_mid_part = rev_mid_part * 10 + (copy%10);
       copy /= 10;
   }
   res = first_part * first_power + (rev_mid_part * third_power) + third_part;

   printf("%lld %lld", num,res);

    return EXIT_SUCCESS;
}
