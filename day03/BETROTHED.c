/*
NUM1 48
NUM2 75

SOF_NUM1 76
SOF_NUM2 49

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
    num1 =  48;
    for ( sof_num1 = 1, cf = 2; cf * cf < num1; cf += 1)
    {
        if ( num1 % cf == 0)
        {
            sof_num1 += ( cf + (num1/cf));
        }
    }
    if ( cf * cf == num1)
        sof_num1 += cf;
    num2 =  75;
    for ( sof_num2 = 1, cf = 2; cf * cf < num2; cf += 1)
    {
        if ( num2 % cf == 0)
        {
            sof_num2 += ( cf + (num2/cf));
        }
    }
    if ( cf * cf == num2)
        sof_num2 += cf;
    if ( num1 == (sof_num2-1) && num2 == (sof_num1-1))
        printf("BETROTHED - %d %d\n", num1, num2);
    else
        printf("NOT Betrothed - %d %d\n", num1, num2);

    return EXIT_SUCCESS;
}














