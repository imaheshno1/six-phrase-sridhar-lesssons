/*
BASE CONVERSION

10      8
10      2
8       2
2       10

     51
8 |6974                                     OCTA
  -----                                       0
8 | 871                 6                     6
  -----
8 |108                  7 * 10               76
   ----
8 | 13                   4 * 100                 476
   ---
8 | 1                   5 * 1000                 5476
  ----
    1                  1 * 10000                 15476

    6974 = (15476)8










    digit           octa        power
       6               0            1
       7                6           10
       4               76           100
       5              476           1000
       1             5476           10000
                    15476           100000

                    n = p1 * (10^nod in p2 ) + p2





         digit = num % 8;
         octal = digit * power + octal;
         power *= 10;
         num = num / 8;











    12345 % 8       1                       6974 % 10 4
    1543  % 8       7                       697  % 10 7
    192   % 8       0                       69   % 10 9
    24    % 8       0                       6    % 10 6
     3    # 8       3                       0



                    1                               4
                   71                              47
                  071                             479
                 0071                            4796
                30071


               digit = num % 8;
               octa = (digit * power ) + octa;
               power *= 10;
               num = num / 8;
               */













#include<stdio.h>
#include<stdlib.h>
int main()
{
    int deciNum;
    int copy;
    int octalNum;
    int power;
    int digit;
    deciNum = 6974;

    octalNum = 0;
    power = 1;

    deciNum = 12345;
    copy = deciNum;
    while ( copy )
    {
    digit = copy % 8;
    octalNum = (digit * power ) + octalNum;
    power *= 10;
    copy /= 8;
    }
    printf("(%d)10 = (%d)8", deciNum, octalNum);














    return EXIT_SUCCESS;
}



























