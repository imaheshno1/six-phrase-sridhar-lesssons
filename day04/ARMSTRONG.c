/*

Armstrong number / Nracissitic

1634

1^4 + 6^4 + 3^4 + 4^4

1 + 1296 + 81 + 256

1634
Find the number of Digits

Break number into individual digits
find the powered digit
sum
Loop

verify

*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//#define debug
int main()
{
    int num;
    int copy_num;
    int nod_num;
    int digit;
    int powered_digit;
    int sum;

    num = 1634;

    copy_num = num;
    nod_num = 0;

    while ( copy_num )
    {
        nod_num += 1;
        copy_num /= 10;
    }

    copy_num = num;
    sum = 0;
    while ( copy_num != 0)
    {
    digit = copy_num % 10;
    powered_digit = pow(digit, nod_num);
    sum += powered_digit;
    copy_num /= 10;
    }
    #ifdef debug
    printf("%d %d\n", num,sum);
    #endif // debug
    if ( sum == num )
        printf("Armstrong");
    else
        printf("NOT an Armstrong");















    return EXIT_SUCCESS;
}



















