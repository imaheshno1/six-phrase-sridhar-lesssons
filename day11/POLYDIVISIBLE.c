#include<stdio.h>
#include<stdlib.h>
void polyDivisible ( int base);
int main()
{
    polyDivisible ( 4 );
    return EXIT_SUCCESS;
}
void polyDivisible_helper ( int used[], int base, int workFor, int currValue);
int toDecimal(int val, int base)
{
    // 34267, 8
    // 7 * 8^0
    // 6 * 8^1
    // 2 * 8^2
    // 4 * 8^3
    // 3 * 8^4

    int deci;
    int otherBasePower;
    int digit;
    int copyVal;

    deci = 0;
    otherBasePower = 1;
    copyVal = val;
    while ( copyVal )
    {
        digit = copyVal % 10;
        deci += (digit * otherBasePower );
        otherBasePower *= base;
        copyVal /= 10;
    }
    return deci;




}
void polyDivisible ( int base)
{
    // set an environment
    // call A helper - recursive
    int used [ base ];
    int used_ind ;
    for( used_ind = 0; used_ind < base; used_ind += 1)
        used [ used_ind ] = 0;

    polyDivisible_helper ( used, base, 1, 0);

}
void polyDivisible_helper ( int used[], int base, int workFor, int currValue)
{
    // enumerate all posisible values 1..base-1
    if ( workFor == base )
    {
        printf("%d\n", currValue);
        return;
    }
    int trialValues;
    for( trialValues = 1; trialValues < base; trialValues +=1 )
    {
        if ( used [ trialValues ] ==0 && toDecimal((currValue * 10 + trialValues),base) % workFor == 0)
        {
            used [ trialValues ] = 1;
            polyDivisible_helper ( used , base, workFor + 1, (currValue * 10 + trialValues) );
            used [ trialValues ] = 0;
        }
    }









}
