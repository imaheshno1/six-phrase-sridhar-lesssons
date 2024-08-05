#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

struct BIT_DATE
{
    unsigned short int ourForm;

int isLarger (BIT_DATE gd2 )
{
    return ourForm > gd2.ourForm;
}
static int isLeap ( int yr )
{
    return ( ( (yr%4==0) && (yr%100!=0) ) || (yr%400==0) ) ? TRUE : FALSE;
}
BIT_DATE ( int dd=1, int mm=1, int yyyy=1980) // cobnstructor
{
    ourForm = ( yyyy - 1980) * 512 + mm * 32 + dd;
}
void showDate ()
{
    int dd;
    int mm;
    int yyyy;
    yyyy = (1980 + (ourForm)/512);
    mm = (ourForm%512) / 32;
    dd = (ourForm%512) % 32;
    printf("%02d/%02d/%d\n", dd, mm, yyyy);
}
int diffDate( BIT_DATE d2)
{
    // add 1
    // until d1 == d2
    int dd1;
    int mm1;
    int yyyy1;
    int dd2;
    int mm2;
    int yyyy2;
    int days_in_month [] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    yyyy1 = (ourForm/512) + 1980;
    mm1   = (ourForm %512 ) / 32;
    dd1   = (ourForm%512 )  % 32;

    yyyy2 = (d2.ourForm/512) + 1980;
    mm2    = (d2.ourForm %512 ) / 32;
    dd2   = (d2.ourForm%512 )  % 32;

    int nod;
    nod = 0;


    while( ! (dd1 == dd2 && mm1 == mm2 && yyyy1 == yyyy2) )
    {
        nod +=1;
        dd1 += 1;
        if ( dd1 > days_in_month [ mm1 ] )
        {
            dd1 = 1;
            mm1 += 1;
            if ( mm1 == 2)
            {
                if ( isLeap ( yyyy1 ) == TRUE)
                    days_in_month [ 2 ] = 29;
                    else
                        days_in_month [ 2 ] = 28;
            } else if ( mm1 > 12)
            {
                mm1 = 1;
                yyyy1+=1;
            }
        }
    }
    return nod;
}
BIT_DATE addDate(int nod)
{
     // 30 7 2024
     // 31 7 2024 1999
     // 1  8 2024 1998
     // 31 28 31 30 31 30 31 31 30 31 30 31
     int days_in_month [] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int dd;
    int mm;
    int yyyy;
    yyyy = (1980 + (ourForm)/512);
    mm = (ourForm%512) / 32;
    dd = (ourForm%512) % 32;
int copy_nod;
copy_nod = nod;
   while ( copy_nod )
   {
       // add 1 to dd
       // check boundary
       // make dd as 1 and add 1 to mm
       // check boundary
       // make mm as 1 and yyyy+1
       dd += 1;
       if ( dd > days_in_month [ mm ])
       {
           dd= 1;
           mm += 1;
           if ( mm == 2)
           {
               if ( isLeap(yyyy) == TRUE)
                days_in_month [ 2 ] = 29;
               else
                days_in_month [ 2 ] = 28;
           } else if ( mm > 12)
           {
               mm = 1;
               yyyy += 1;
           }
       }
       copy_nod -=1;
   }
    BIT_DATE temp;
    temp.ourForm = ( yyyy - 1980) * 512 + mm * 32 + dd;
    return temp;


}
static int DayOfWeek( int y, int m, int d ) /* returns Day of Week:
0 = Sunday, 1= Monday...
*/
{
static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
y -= m < 3;
return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
} /*--DayOfWeek( )--------*/

char * dayOf()
{
    static char * dayNames [] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

    int dd;
    int mm;
    int yyyy;
    yyyy = (1980 + (ourForm)/512);
    mm = (ourForm%512) / 32;
    dd = (ourForm%512) % 32;
    int dow;
    dow = DayOfWeek(yyyy,mm,dd);
    return dayNames[dow];

}


} ; // End of BIT DA





int main()
{

    BIT_DATE today( 30,7,2024);
    BIT_DATE later;
    today.showDate ( );
    later = today.addDate( 2000);
    later.showDate();
    BIT_DATE birthDate(3,3,2004);
    int age_as_days;
    age_as_days = birthDate.diffDate(today);
    printf("You are %d days %c Young %c\n", age_as_days, 1,2);
    int checkRes;
    checkRes = today.diffDate(later );
    printf("diff = %d\n", checkRes);
    printf("Today is a %s\n",today.dayOf());
    return EXIT_SUCCESS;
}












