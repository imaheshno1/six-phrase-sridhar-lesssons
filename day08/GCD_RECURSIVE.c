
/*

NUM/DEN

15/10

1       5

30/10
3       0

NUM < DEN
10/20
0   10


12 / 15
0       12

*/



#include<stdio.h>
#include<stdlib.h>
int gcd(int n1, int n2);
int gcd_helper ( int n1, int n2);
// % 10^9+7
// mod arithemtic

int main()
{
    /*
    int n1;             // 0
    int n2;            // 13
    int n1_mod_n2;
    n1 = valu1; // 0
    n2 = valu2; // 13

    n1_mod_n2 = n1 % n2; // 0 % 13      0   0
    while ( n1_mod_n2 != 0)
    {
    n1 = n2;
    n2 = n1_mod_n2;
    n1_mod_n2 = n1 %  n2;
    }
*/
int num1;
int num2;
int res;
num1 = 12;
num2 = 5;
res = gcd ( num1, num2);
printf("gcd(%d,%d) = %d\n", num1, num2, res);


    return EXIT_SUCCESS;
}
int gcd(int n1, int n2){
   // set an environment
   // call a helper - recursive
   return gcd_helper(n1, n2);

}
int gcd_helper ( int n1, int n2)
{
    if ( n1 == 0  ) return n2;
    if ( n2 == 0 ) return n1;
    return gcd_helper(n2, n1 % n2 );
}
