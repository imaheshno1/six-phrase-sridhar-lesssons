#include<stdio.h>
#include<stdlib.h>
int main()
{

   long long int num;
   long long int copy;
   int nod_num;
   int startDigit;
   int lastDigit;
   int digit;
   int d;
   // 9876543210
   num = 641954278;
   copy = num;
   nod_num = 0;





   while ( copy )
   {
       nod_num += 1;
       copy /= 10;
   }
   if ( nod_num == 10)
   {
       startDigit = 0;
       lastDigit = 9;
   }
   else
   {
       startDigit = 1;
       lastDigit = nod_num;
   }
   for( digit = startDigit; digit <= lastDigit ; digit+=1)
   {
       copy = num;
       while ( copy )
       {
           d = copy % 10;
           if ( d == digit )
           {
               break;
           }
           copy /= 10;
       }
       if ( copy == 0)
       {
           printf("missing %d\n", digit);
           break;
       }
   }
      printf("%s", digit > lastDigit ? "PAN":"NOT PAN");








    return EXIT_SUCCESS;
}
