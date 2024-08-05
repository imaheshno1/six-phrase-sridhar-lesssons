/*


n
7
*******         0       7    1
 ******         1       6    2
  *****         2       5    3
   ****         3       4    4
    ***         4       3    5
     **         5       2    6
      *         6       1    7

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int row;
    int col;
    int spaces;
    int stars;

    scanf("%d", &n);
    for ( row = 1; row <= n; row += 1, printf("\n"))
    {
        for(col = 1;col <=(row-1); col +=1 )
        {
            printf(" ");
        }
        for(col = 1;col <= n- (row-1); col +=1 )
        {
            printf("*");
        }

    }



    return EXIT_SUCCESS;
}
