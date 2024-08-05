/*
Write a program to print the way we read a phone number

Samples:
9442161065

Nine Double Four Two One Six One Zero Six Five


9994466665

Triple Nine Double Four Double Six Double Six Five
Analysis

Output

1		Word
2		D 	Word
3		T	Word
4		D W D W
5		T W D W
6		T W T W
7		T W D W D W
8		T W T W D W
9		T W T W T W
10		T W T W D W D W

2,4     D W
3,5,6,7,8,9,T W


5       TW
2       DW

6   TW
3   TW

7   TW
4   DW
2   DW

8   TW
5

9   TW
6


while ( ctr )
{
   if ctr is 2 or 4
       print D W
       subtract 2
   else if ctr is 3 5 6 7 8 9
      print t w
       subtract
       else
       WORD
       subtract 1

}
*/































#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int phoneNumber;
    long long int copy;
    long long int power;
    int prevDigit;
    int currDigit;
    int ctrDigit;

    phoneNumber = 9994422236LL;
    phoneNumber = 9994422226LL;
    // find the power
    power = 1;
    while (  phoneNumber / power > 9)
    {
        power *= 10;
    }
    copy = phoneNumber;
    prevDigit = copy / power;
    copy %= power;
    power /=10;
    ctrDigit = 1;

    while ( power )
    {
        currDigit = copy / power;
        if ( currDigit == prevDigit )
        {
            ctrDigit += 1;
        }
        else{
            //printf("%d %d\n", ctrDigit, prevDigit);
            while ( ctrDigit )
            {
                if ( ctrDigit == 2 || ctrDigit == 4)
                {
                    printf("Double ");
                    ctrDigit-=2;
                }
                else if ( ctrDigit > 1)
                {
                     printf("Triple ");
                     ctrDigit -=3;
                }
                else
                    ctrDigit -=1;
                switch ( prevDigit )
                {
                    case 0 : printf("Zero ");  break;
                    case 1 : printf("One ");  break;
                    case 2 : printf("Two ");  break;
                    case 3 : printf("Three ");  break;
                    case 4 : printf("Four ");  break;
                    case 5 : printf("Five ");  break;
                    case 6 : printf("Six ");  break;
                    case 7 : printf("Seven ");  break;
                    case 8 : printf("Eight ");  break;
                    case 9 : printf("Nine ");  break;

                }
            }
            prevDigit = currDigit;
            ctrDigit = 1;
        }
        copy %= power;
        power/=10;
    }
//            printf("%d %d\n", ctrDigit, prevDigit);
            while ( ctrDigit )
            {
                if ( ctrDigit == 2 || ctrDigit == 4)
                {
                    printf("Double ");
                    ctrDigit-=2;
                }
                else if ( ctrDigit > 1)
                {
                     printf("Triple ");
                     ctrDigit -=3;
                }
                else
                    ctrDigit -=1;
                switch ( prevDigit )
                {
                    case 0 : printf("Zero ");  break;
                    case 1 : printf("One ");  break;
                    case 2 : printf("Two ");  break;
                    case 3 : printf("Three ");  break;
                    case 4 : printf("Four ");  break;
                    case 5 : printf("Five ");  break;
                    case 6 : printf("Six ");  break;
                    case 7 : printf("Seven ");  break;
                    case 8 : printf("Eight ");  break;
                    case 9 : printf("Nine ");  break;
                }
            }
















    return EXIT_SUCCESS;
}

