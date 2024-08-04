#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    long long int power;
    long long int sqr_num;
    long long int first;
    long long int second;
    num = 777;
    sqr_num  = num * num;
    power = 10;
    first = sqr_num / power;
    second = sqr_num % power;
    while ( second < num )
    {
        if ( first + second == num )

        {
           printf("%lld + %lld = %lld\n", first, second, (first + second ));
            break;
        }
        power *= 10;
    first = sqr_num / power;
    second = sqr_num % power;

    }



    return EXIT_SUCCESS;
}
