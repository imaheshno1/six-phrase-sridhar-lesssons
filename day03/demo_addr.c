#include<stdio.h>
#include<stdlib.h>
int main()
{














    char * dayNames[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday"\
    ,"Friday","Saturday"};
    int dayNames_ind;
    int dayNames_size;
    dayNames_size = sizeof ( dayNames ) / sizeof ( dayNames [ 0 ]);
    for( dayNames_ind = 0; dayNames_ind < dayNames_size; dayNames_ind += 1 )
    {
        printf("%u %s\n", dayNames [ dayNames_ind ], dayNames [ dayNames_ind ]);
    }



    return EXIT_SUCCESS;
}
