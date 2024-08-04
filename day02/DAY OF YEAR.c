#include<stdio.h>
#include<stdlib.h>
int main()
{
    int dd;
    int mm;
    int doy;

    scanf("%d %d", &dd, &mm);
    doy = 0;
    switch ( mm - 1)
    {
        case 12 : doy+=31;
        case 11 : doy+=30;
        case 10 : doy+=31;
        case  9 : doy+=30;
        case  8 : doy+=31;
        case  7 : doy+=31;
        case  6 : doy+=30;
        case  5 : doy+=31;
        case  4 : doy+=30;
        case  3 : doy+=31;
        case  2 : doy+=28;
        case  1 : doy+=31;

    }
    doy += dd;
    printf("DOY of %d,%d = %d", dd, mm, doy);


}
