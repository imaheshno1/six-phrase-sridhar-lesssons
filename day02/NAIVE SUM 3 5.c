/*




product of a and b = product of its LCM and GCD
a*b = gcd(a,b) * lcm(a,b)
?? gcd(a,b) -> Euclid's




5
1 2 2
2 1 2
2 2 1
0 0 5
0 5 0
5 0 0
1 4 0
4 1 0
0 <= n <= 10^6

Given n, n1, n2 and n3, find the sum of numnbers in the range

1 to 'n' that are divisible by n1 or n2 or n3

given 'n' find the sum of numbers in the range 1 to 'n' that are

divisible by 3 or 5

10 <= n <= 10^8
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n;
    int num;
    long long int sum;
    clock_t start;
    clock_t stop;
    scanf("%d",&n);
    start = clock();
    /*for( num = 1, sum = 0; num <= n; num +=1)
    {
        if ( num % 3 == 0 || num % 5 == 0)
        {
            sum += num;
        }
    }*/
    // 3
    // num <= n , (num%3 == 0 || num % 5 == 0)
    sum = 0;
    for( num = 0; num <= n; num += 3)
    {
        sum += num;
    }
    // 5
    for( num = 0; num <= n; num += 5)
    {
        if ( num % 15 != 0 )
            sum += num;
    }
 /*   // 15
    for( num = 0; num <= n; num += 15)
    {
        sum -= num;
    }*/
    stop = clock();

    double time_taken;
    time_taken = ( stop - start ) / 1000.0;
    printf("n = %d, sum = %lld Time Taken =  %.3f\n", n,sum, time_taken);



    return EXIT_SUCCESS;
}

















