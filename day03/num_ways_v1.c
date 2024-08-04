/*
given 'n' number of ways we can form 'n' by adding 3 Whole numbers

0 <= n <= 10^6
0        1000000

n is an int


3        0..3         0..3       0..3
        first       second      third
          0            0          0      NO
          0            0          1      No
          0            0          2      NO
          0            0          3      YES



3        0..3         0..3       0..3
        first       second      third
          0            0          0      NO
          0            0          1      No
          0            0          2      NO
          0            0          3      YES


first = 0;
second = 0;
for(third = 0; third <= n; third += 1)
{
   if ( first + second + third == n )
      print "yes"
}

3        0..3         0..3       0..3
        first       second      third
          0            0          0      NO
          0            0          1      No
          0            0          2      NO
          0            0          3      YES
          0            1          0      no
          0            1          1
          0            1          2     yes
          0            1          3
          0            2          0
          0            2          1     yes
          0            2          2
          0            2          3
          0            3          0     yes
          0            3          1
          0            3           2
          0            3          3
          1
first = 0;
for ( second = 0; second <= n; second +=1)
{
     for( third = 0; third <= n; third +=1
     {
       if ( first + second + third == n)
          pf Yes
     }
}
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{

    int n;
    int first;
    int second;
    int third;
    int now;
    n = 10000;
    for ( now = 0, first= 0; first <= n; first += 1)
    {
        for ( second = 0; second <= n ; second +=1)
        {
            for ( third = 0; third <= n ; third+=1)
            {
                if ( first + second + third == n)
                    now+=1;
            }
        }
    }
    printf("n = %d, now = %d\n", n, now);
    return EXIT_SUCCESS;
}



























