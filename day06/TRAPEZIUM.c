/*


5


01 02 03 04 05 26 27 28 29 30
   06 07 08 09 22 23 24 25
      10 11 12 19 20 21
         13 14 17 18
            15 16


7
01 02 03 04 05 06 07 50 51 52 53 54 55 56
   08 09 10 11 12 13 44 45 46 47 48 49
      14 15 16 17 18 39 40 41 42 43
         19 20 21 22 35 36 37 38
            23 24 25 32 33 34
               26 27 30 31
                  28 29

( n*(n+1)) /2
( (n-1)  * n) / 2

01 02 03 04 05 06 07 50 51 52 53 54 55 56           22      7
   08 09 10 11 12 13 44 45 46 47 48 49              16      6
      14 15 16 17 18 39 40 41 42 43                 11      5
         19 20 21 22 35 36 37 38                    7       4
            23 24 25 32 33 34                       4       3
               26 27 30 31                          2       2
                  28 29                             1       1
        28           1

                  */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int row;
    int col;
    int last_num;
    int add_num;
    int right_print_num;
    int left_print_num;

    scanf("%d", &n);
    last_num = ( n * (n+1))/2;
    for( row = n , left_print_num= 1; row >= 1 ; row -= 1, printf("\n"))
    {
        for( col = 1; col <= (n-row); col += 1)
        {
            printf("   ");
        }
        // left wing
        for( col = 1; col <= row; col += 1)
        {
            printf("%02d ", left_print_num);
            left_print_num += 1;
        }
        // right wing
        add_num = ( row * (row-1))/2 + 1;
        right_print_num = last_num + add_num;
        for( col = 1; col <= row; col += 1)
        {
            printf("%02d ", right_print_num);
            right_print_num += 1;
        }

    }

  return EXIT_SUCCESS;
}











