/*

n
7

      *
     **
    ***
   ****
  *****
 ******
*******

For outer Loop ROw
{

   Loop to print spaces
   Loop to print Stars


}
1       6       1
2       5       2


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
        for(col = 1;col <=(n-row); col +=1 )
        {
            printf(" ");
        }
        for(col = 1;col <= row; col +=1 )
        {
            printf("*");
        }

    }



    return EXIT_SUCCESS;
}

















