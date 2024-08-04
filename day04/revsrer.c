/*

Any context when reversed does not loose it's sanctity and it's value
123000
321
1001
1001001
malayalam
racecar

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int copy_num;
    int digit;
    int rev_num;


    num = 6974;
    copy_num = num;
    rev_num = 0;
    while ( copy_num )
    {
    digit = copy_num % 10;
    rev_num = rev_num * 10 + digit;
    copy_num /= 10;

    }
    printf("%d reversed = %d", num, rev_num);



   return EXIT_SUCCESS;
}
