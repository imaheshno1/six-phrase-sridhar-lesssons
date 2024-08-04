/*







Short Circuit
      SirKit


   if ( c1 && c2 && c3 && c4 )

   if ( c1 & c2 & c3 & c4)


c1 True
c2 False
c3 True
c4 True
   if ( c1 || c2  || c3 || c4 )

   if ( c1 |  c2 |  c3 |  c4)

*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int dayNumber;
    scanf("%d", &dayNumber);
    switch ( dayNumber )
    {
        case 1 : printf("Monday"); break;
        case 2 : printf("Tuesday"); break;// twosday
        case 3 : printf("Wednesday"); break;// whenzday
        default : printf("Earth Has 7 days, dear Alien!!!!!!"); break;
        case 4 : printf("Thursday"); break; // thusd
        case 5 : printf("Friday"); break;
        default : printf("");
        case 6 : printf("Saturday"); break; // sat uh day
        case 7 : printf("Sunday");
    }
}


















