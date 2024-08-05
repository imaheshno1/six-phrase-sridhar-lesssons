/*
AD HOC


squares

rectangle

traingles

Diamond


01 02 03 04 05 26 27 28 29 30
   06 07 08 09 22 23 24 25
      10 11 12 19 20 21
         13 14 17 18
            15 16

1       n
2       n-1
3       n-2
4       n-3
5       n-4

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int row;
    int col;
    scanf ( "%d", &n);
    for( row = n; row >=  1 ; row -=1, printf("\n"))
    {
        for( col = 1; col <=  row ; col +=1 )
        {
            printf("*");
        }
    }
    scanf ( "%d", &n);
    for( row = 1; row <= n ; row +=1, printf("\n"))
    {
        for( col = 1; col <= n-(row-1)  ; col +=1 )
        {
            printf("*");
        }
    }


        return EXIT_SUCCESS;
}


















