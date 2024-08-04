/*
NUM1
NUM2

SOF_NUM1
SOF_NUM2

CHECK_FACTOR


*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1;
    int num2;
    int sof_num1;
    int sof_num2;
    int cf;
    num1 =  220;
    for ( sof_num1 = 1, cf = 2; cf * cf < num1; cf += 1)
    {
        if ( num1 % cf == 0)
        {
            sof_num1 += ( cf + (num1/cf));
        }
    }
    if ( cf * cf == num1)
        sof_num1 += cf;
    num2 =  284;
    for ( sof_num2 = 1, cf = 2; cf * cf < num2; cf += 1)
    {
        if ( num2 % cf == 0)
        {
            sof_num2 += ( cf + (num2/cf));
        }
    }
    if ( cf * cf == num2)
        sof_num2 += cf;
    if ( num1 == sof_num2 && num2 == sof_num1)
        printf("Amicable - %d %d\n", num1, num2);
    else
        printf("NOT Amicable - %d %d\n", num1, num2);

    return EXIT_SUCCESS;
}














