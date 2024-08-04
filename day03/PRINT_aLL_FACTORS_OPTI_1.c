/*
product of a and b = product of its lcm and gcd

gcd of a nd b = ( a * b ) / lcm ( a, b)
lcm (a,b) = a*b / gcd(a,b)-
32      1 2 4 8 16 32               6
100     1 2 4 5 10 20 25 50 100     9
35      1 5 7 35                    4
121     1 11 121                    3
49      1 7 49
169     1 13 169
'n'
1 to 'n'
100 /2 = 50 0
100 / 50 = 2 0
200

1       200
2       100
3
4       50
5       40
6
7
8       25
9
10      20
11      18.xx
12      16.xx
13      15.xx
14      14.xx
15      13.xx

cf <= ( num / cf) 2.775
cf * cf <= num 1.866

cf <= sqrt ( num )

*/



#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long long int num;
    long long int check_factor;
    long long int until;
    num = 756; // 27 * 28 27.xx
    until = ceil ( sqrt ( num ) );
    for ( check_factor = 1; check_factor  < until; check_factor += 1)
    {
        if ( num % check_factor == 0)
            printf("%lld %lld\n", check_factor, (num/check_factor));
    }
    if ( check_factor * check_factor == num)
        printf("%lld", check_factor);
    return EXIT_SUCCESS;
}


















