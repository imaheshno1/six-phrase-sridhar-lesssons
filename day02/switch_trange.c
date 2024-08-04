#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    scanf("%d", &num);
    switch ( num )
    {
        case 0 ... 9 : printf("1 digit"); break;
        case 10 ...99 : printf("2 digit"); break;
        case 100 ... 999 : printf("3 digit"); break;
        case 1000 ... 9999 : printf("4 digit"); break;
        case 10000 ... 99999 : printf("5 digit"); break;
        case 100000 ... 9999998 : printf("6 digit"); break;

    }




    return EXIT_SUCCESS;
}
