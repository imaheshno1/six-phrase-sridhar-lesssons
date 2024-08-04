/*
n1 n2 n3 n4
12 78 89 44

89 > 78 > 44 > 12

find the largest

if n1 > n2
n1
else
n2

if n1 > n2
   if n1 > n3
       n1
   else
   n3
else if n2 > n3
     n2
     else
     n3


     b1 = larger of n1, n2
     b2 = larger of n3, n4
     big = larger of b1 and b2

     if ( n1 > n2)
         b1 = n1;
         else
         b1 = n2
     b1 = n1 > n2 ? n1 : n2;
    if ( n3 > n4)
       b2 = n3;
       else
       b2 = b4;
     b2 = n3 > n4 ? n3 : n4;
       if ( b1 > b2)
          big = b1;
          else
          big = b2;
     big = b1 > b2 ? b1 : b2;

















*/



#define max(a,b) (((a)>(b)) ? (a) : (b))
#include<stdio.h>
//#include<stdlib.h>
int main()
{

    int n1;
    int n2;
    int n3;
    int n4;

    int big;
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    big = max(max(n1,n2),max(n3,n4)) ;
    printf("Big = %d", big);




  //  return EXIT_SUCCESS;
}















