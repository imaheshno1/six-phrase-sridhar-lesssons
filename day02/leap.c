#include<stdio.h>
#include<stdlib.h>
int main()
{
    int yyyy;
    scanf("%d", &yyyy);
    if ( yyyy % 4 == 0)
    {
        if ( yyyy % 100 == 0)
        {
            if ( yyyy % 400 == 0)
                printf("LEAP");
            else
                printf("NOT a Leap");
        }
        else
            printf("LEAP");
    }
    else
        printf("NOT a LEAP");


    return EXIT_SUCCESS;
}
