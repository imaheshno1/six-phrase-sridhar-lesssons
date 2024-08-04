#include<stdio.h>
#include<stdlib.h>
int factorial ( int num )
{
   int res;
   int copy_num;
   for ( copy_num = num, res = 1; copy_num ; copy_num -=1 )
   {
      res *= copy_num;
   }
// return value is sent back thru EAX register
// last multiplication operation has used EAX
// hence even if you do not return, seems like it is working
}

int main()
{
   int num;
   int sum;
   int copy_num;
   int digit;
   num = 145;
   copy_num = num;
   sum = 0;
   while ( copy_num )
   {
      digit = copy_num % 10;
      sum += factorial( digit );
      copy_num /= 10;
   }
   printf("sum = %d", sum);

  return EXIT_SUCCESS;
}
