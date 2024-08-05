/*


78560403398

0 1 2 3 4 5 6 7 8 9
0 0 0 0 0 0 0 0 0 0


3

30034567889
*/



#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int num;
    long long int copy;
    int digit;
    long long int res;
    int freq_arr [ 10 ] = {0};
    int freq_arr_ind;
    int freq_arr_size;


    freq_arr_size = 10;
    num = 80906754048;
    // fill the freq array

    copy = num;

    while ( copy )
    {
        digit = copy % 10;
        freq_arr [ digit ] += 1;
        copy /= 10;
    }


    // get the first digit;
    int srch_digit;

    for( srch_digit = 1; srch_digit < 10; srch_digit += 1)
    {
        if ( freq_arr [ srch_digit ] > 0)
        {
            res = srch_digit;
            freq_arr [ srch_digit ] -=1;
            break;
        }
    }


    for ( srch_digit = 0; srch_digit < 10;srch_digit += 1)
    {
        while ( freq_arr [ srch_digit ])
        {
            res = res * 10 + srch_digit;
            freq_arr [ srch_digit ] -=1;
        }
    }

    printf("%lld => %lld\n", num, res);













    return EXIT_SUCCESS;
}












