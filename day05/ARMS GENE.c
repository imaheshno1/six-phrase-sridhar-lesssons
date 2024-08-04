/*


Armstrong - Sum of individual digit ^ nod of a number 'n' is equal to 'n'



371

3^3 + 7^3 + 1^3

27 + 343 + 1
343
 27
  1

371
*/

int ourPower ( int base, int exponent)
{
    //              3          5
    // 1 * 3 * 3 * 3 * 3 * 3
    // multiplyCtr
    // 0   1   2   3   4   5
    int multiplyCtr;
    int res;
    for( res = 1, multiplyCtr =0; multiplyCtr < exponent; multiplyCtr+=1)
    {
        res = res * base;
    }
    return res;
}










#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int num;
    int nod_num;
    int digit;
    int powered_digit;
    int sum;
    int copy;
    int until;
    int pow_4_4;
    until = 10;
    nod_num = 1;
    int ctr;
    ctr = 0;
    pow_4_4 = 256;
    for  (num = 1; num <= 10000000 ; num += 1)
    {
        if ( num == until)
        {
            nod_num +=1;
            until *= 10;
        }
        copy = num;

        sum = 0;
        while ( copy )
        {
            digit = copy % 10;
            if ( digit == 4 && nod_num == 4 )
                powered_digit = 256;
            else
            {

//            powered_digit = ourPower( digit, nod_num );
    int multiplyCtr;
    int res;
    for( res = 1, multiplyCtr =0; multiplyCtr <nod_num; multiplyCtr+=1)
    {
        res = res * digit;
    }
          powered_digit = res;
            }
            sum += powered_digit;
            if ( sum > num )
                break;
            copy /= 10;
        }
        if ( sum == num)
            printf("%d ", num);

    }


printf("\n\n\n\n\nctr = %d", ctr);


    return EXIT_SUCCESS;
}

















