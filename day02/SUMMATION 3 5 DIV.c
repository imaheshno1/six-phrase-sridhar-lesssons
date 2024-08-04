/*

n
30
3 5 6 9 10 12 15 18 20 21 24 25 27 30





3 6 9 12 15 18 21 24 27 30
1 2 3  4  5  6  7  8  9 10 -> 55 * 3 = 165

5 10 15 20 25 30
1  2  3  4  5  6 21 * 5 = 105

15 30
 1  2  3 * 15 = 45
165 + 105 = 270 - 45 = 225






  100 / 3 => 33     ( 33 * 34 ) / 2 * 3
  100 / 5 => 20     ( 20 * 21 ) / 2 * 5
  100 / 15 => 6     ( 6 * 7 ) / 2 * 15











Big O(1)
Array Access
94421 61065
Sridhar Arumugasamy
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{

    int n;
    int num3;
    int num5;
    int num15;
    long long int sum3;
    long long int sum5;
    long long int sum15;
    long long int res;
    // populating
    n = 10;
    // priming


    num3 = n / 3;
    num5 = n / 5;
    num15 = n / 15;
    sum3 = 3 * ( ( num3 * (num3 + 1LL ))/ 2);
    sum5 = 5 * ( ( num5  * (num5 + 1LL ))/ 2);
    sum15 = 15  * ( ( num15 * (num15 + 1LL ))/ 2);
    res = ( sum3 + sum5 ) - sum15;
    printf("n = %d, sum = %lld \n", n, res);

    return EXIT_SUCCESS;
}














