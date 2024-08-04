#include<stdio.h>
#include<stdlib.h>
int main()
{
    int month_number;
    scanf("%d", &month_number);
    switch ( month_number )
    {
        case 1 : printf("January\n\n\n\n"); break;
        case 2 : printf("Febraury\n\n\n\n"); break;
        case 3 : printf("March\n\n\n\n"); break;
        case 4 : printf("April\n\n\n\n"); break;
        case 5 : printf("May\n\n\n\n"); break;
        case 6 : printf("June\n\n\n\n"); break;
        case 7 : printf("July\n\n\n\n"); break;
        case 8 : printf("August\n\n\n\n"); break;
        case 9 : printf("September\n\n\n\n"); break;
        case 10 : printf("October\n\n\n\n"); break;
        case 11 : printf("November\n\n\n\n"); break;
        case 12 : printf("December\n\n\n\n"); break;
        default : printf("Which World Are You From, Welcome to Earth!!!!");

    }
}
