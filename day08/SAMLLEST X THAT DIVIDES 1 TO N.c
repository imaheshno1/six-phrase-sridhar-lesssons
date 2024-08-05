/*
Given 'n' find the smallest number 'x' that divides 1 to 'n' with no remainder
*/
#include<stdio.h>
#include<stdlib.h>
int gcd( int n1 , int n2);
int gcd_helper ( int n1 , int n2);
int main()
{
    int n;
    int res;
    int number;
    scanf("%d", &n);
    for ( res = 1, number= 1; number <= n ; number += 1)
    {
        res = res * ( number / gcd(number, res));
    }
    printf("%d -> %d", n, res);
    return EXIT_SUCCESS;
}
int gcd(int n1, int n2){
   // set an environment
   // call a helper - recursive
   return gcd_helper(n1, n2);

}
int gcd_helper ( int n1, int n2)
{
    if ( n1 == 0  ) return n2;
    if ( n2 == 0 ) return n1;
    return gcd_helper(n2, n1 % n2 );
}
