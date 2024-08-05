/*
Given an array that is made of TRIPLETS except one unique value, find the unique value

{12,32,65,21,21,15,32,12,65}

*/
#include<stdio.h>
#include<stdlib.h>
int anyBaseConverter( int value , int targetBase);
int anyBaseXOR( int value1, int value2, int base);
int toDecimal( int otherBase, int base);
int main()
{
   int arr [ ] = {77, 73, 66, 7, 25, 31,73, 27, 7, 77, 5,5,5,31,25,73, 66, 66, 7, 77, 25, 31};
   // int arr [ ] = {12,12,12,27};
    int arr_ind;
    int arr_size;
    int res;
    int base3Value;
    arr_size = sizeof arr / sizeof arr [ 0 ];
    res = 0;
    for( arr_ind = 0; arr_ind < arr_size ; arr_ind += 1)
    {

        base3Value = anyBaseConverter( arr [ arr_ind ] , 3);
        res = anyBaseXOR(res, base3Value, 3);

    }
   // printf("res = %d", res)
    printf("%d", toDecimal(res,3));
    return EXIT_SUCCESS;
}
int anyBaseConverter( int value , int targetBase)
{
    /*
            6974
                    7
            6974 / 7        996     2
            996/7           142     2
            142 / 7          20     2
              20/7            2     6
              2
              u
             tu
             22
            htu
            222
           thtu
           6222
          tthtu
          26222
    */

    int copy_value;
    int remainder;
    int pos_power;
    int targetValue;
    targetValue = 0;
    pos_power = 1;
    copy_value = value;

    while ( copy_value )
    {
        remainder = copy_value % targetBase;
        targetValue = (pos_power * remainder ) + targetValue;
        copy_value /= targetBase;
        pos_power *= 10;
    }
    return targetValue;
}

int toDecimal( int otherBaseValue, int base)
{
    /*
    26222           7


        2 * 7^0
        2 * 7^1
        2 * 7^2
        6 * 7^3
        2 * 7^4

    */



    int copy_otherBaseValue;
    int otherBase_power;
    int digit;
    int decimal;



    decimal = 0;
    otherBase_power = 1;
    copy_otherBaseValue = otherBaseValue;

    while ( copy_otherBaseValue )
    {
        digit = copy_otherBaseValue % 10;
        decimal = decimal + (digit * otherBase_power);
        copy_otherBaseValue /= 10;
        otherBase_power *= base;
    }
    return decimal;

}

int anyBaseXOR        ( int value1, int value2, int base )
{
    //              22211010     2001       3

    /*
                22211010
                    2001
                22210011
                2221101
                    200
                222110
                    20
                22211
                    2
                2221
                    0

                d1      d2      d1^d2       conval      pospower
                                               0            1
                 0      1         1            1           10
                 1      0         1           11           100
                 0      0         0           11           1000
                 1      2         0           11           10000
                 1      0         1        10011           100000
                 2      0         2       210011           1000000
                 2      0         2      2210011           10000000
                 2      0         2     22210011           100000000

    */

    int copy_valu1;
    int copy_valu2;
    int d1;
    int d2;
    int d1_xor_d2;
    int conValue;
    int posPower;

    conValue = 0;
    posPower = 1;
    copy_valu1 = value1;
    copy_valu2 = value2;
    while ( copy_valu1 || copy_valu2)
    {
    d1 = (copy_valu1 % 10);
    d2 = (copy_valu2 % 10);
    d1_xor_d2 = (d1 + d2) % base;
    conValue = (d1_xor_d2*posPower) + conValue;
    posPower *= 10;
    copy_valu1 /= 10;
    copy_valu2 /= 10;
    }

 //   printf("%d", conValue);
 return conValue;

}




























