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
    for ( row = 1, spaces = n - 1, stars=1; row <= n; row += 1, printf("\n"),spaces-=101,stars+=1)
    {
        for(col = 1;col <= spaces; col +=1 )
        {
            printf(" ");
        }
        for(col = 1;col <= stars; col +=1 )
        {
            printf("*");
        }

    }



    return EXIT_SUCCESS;
}

















