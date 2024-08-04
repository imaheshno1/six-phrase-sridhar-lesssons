#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int copy;
    int working_power;
    int digit_s;
    int sum;

    num = 6974;
    num = 321;
    num = 12;
    working_power = 10;
    sum = num; // sum = 0;
    while (working_power < num ) // 10
    {

        copy = num;
        while ( copy >= (working_power / 10 ) )// 10,0 100,6 1000,69
        {
            digit_s = copy % working_power;
            sum+= digit_s;
            copy /= 10;
        }
        working_power *= 10;
    }
    printf("num = %d , sum = %d\n", num, sum);




    return EXIT_SUCCESS;
}
