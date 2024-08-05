#include<stdio.h>
#include<stdlib.h>
int  main()
{
    int n;
    int row;
    int col;
    int left;
    int right;
    n = 7;


    for( row = n ; row >= 1; row -=1, printf("\n"))
    {
        for(col = 1, left = n; col <= n-row; col +=1, left-=1)
        {
            printf("%d", left);
        }

        for( col = 1 ; col <= (row * 2 ) - 1; col += 1)
        {
            printf("%d", row);
        }
        for(col = 1, right = row+1; col <= n-row ; col +=1, right+=1)
        {
            printf("%d", right);
        }


    }

    for( row = 2 ; row <= n; row +=1, printf("\n"))
    {
        for(col = 1, left = n; col <= n-row; col +=1, left-=1)
        {
            printf("%d", left);
        }


        for( col = 1 ; col <= (row * 2 ) - 1; col += 1)
        {
            printf("%d", row);
        }
        for(col = 1, right = row+1; col <= n-row ; col +=1, right+=1)
        {
            printf("%d", right);
        }

    }


    return EXIT_SUCCESS;
}
