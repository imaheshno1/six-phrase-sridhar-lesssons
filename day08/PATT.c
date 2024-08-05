/*
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
            printf("**");
        }
        // left wing
        for( col = 1; col <= row; col += 1)
        {
            printf("%d", left_print_num*10);
            left_print_num += 1;
        }
        // right wing
        add_num = ( row * (row-1))/2 + 1;
        right_print_num = last_num + add_num;
        for( col = 1; col <= row; col += 1)
        {
            if ( col < row)
            printf("%d", right_print_num*10);
            else
            printf("%d", right_print_num);
            right_print_num += 1;
        }

    }

  return EXIT_SUCCESS;
}
