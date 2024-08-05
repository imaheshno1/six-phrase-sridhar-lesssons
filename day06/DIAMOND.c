/*



N
7                        SPACES        ROW    STARS
      *                     6           1       1
     ***                    5           2       3
    *****                   4           3       5
   *******                  3           4       7
  *********                 2           5       9
 ***********                1           6       11
*************               0           7       13
                          N-ROW                ROW * 2 -1

N
7
      *
     **#
    ***##
   ****###
  *****####
 ******#####
*******######

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int row;
    int col;
    scanf("%d", &n);
    for( row = 1 ; row <= n; row += 1, printf("\n"))
    {
        for( col = 1; col <= (n-row); col += 1)
            printf("  ");
        for( col = 1; col <= (2*row-1); col += 1)
            printf("* ");

    }
    for( row = n - 1; row >=  1; row -= 1, printf("\n"))
    {
        for( col = 1; col <= (n-row); col += 1)
            printf("  ");
        for( col = 1; col <= (2*row-1); col += 1)
            printf("* ");

    }

    return EXIT_SUCCESS;
}



















