/*


input n

calculate number of numbers required ( n * (n+1) ) /2

find the number of digits

20

(20 * (20+1))/2

210
3
*/




#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int row;
    int col;
    int number;
    scanf("%d", &n);
    int non;
    int nod;
    non = (n * (n+1))/2;
    if ( non < 10)
        nod = 1;
    else if ( non < 100)
        nod = 2;
    else
        nod = 3;
    number = 1;
    for( row = 1; row <= n; row += 1, printf("\n"))
    {
        for ( col = 1; col <= row; col += 1)
        {
            printf("%0*d ", nod, number);
            // %WIDTH.PREC char
            number+=1;
        }
    }



    return EXIT_SUCCESS;
}


