#include<stdio.h>
#include<stdlib.h>
int main()
{


    int octal;
    int octal_power;
    int digit;
    int deci;
    int copy;
    octal = 15476;
    octal = 30071;
    octal = 1000000;
    deci=0;
    octal_power=1;


    copy = octal;
    while ( copy )
    {
        digit =  copy % 10;
        deci = deci + (digit * octal_power);
        octal_power *= 8;
        copy /= 10;
    }
    printf("(%d)8 = (%d)10", octal,deci);













    return EXIT_SUCCESS;
}
