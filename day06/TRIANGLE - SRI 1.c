#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int row;
    int col;
    int number;
    scanf("%d", &n);
    number = 1;
    for( row = 1; row <= n; row += 1, printf("\n"))
    {
        for ( col = 1; col <= n; col += 1)
        {
            printf("%d ", number);
            number+=1;
        }
    }



    return EXIT_SUCCESS;
}
