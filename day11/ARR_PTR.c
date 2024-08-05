/*
*/


#include<stdio.h>
#include<stdlib.h>
int main(){

int arr [ 10 ] = {1,2,3,4,5,6,7,8,9,10};
int ind;
int * ptr;

ptr = arr;
for( ind = 0; ind < 10 ; ind +=1)
{
    printf("%d ", *ptr ) ;
    ptr+=1;
    arr += 1;
}


return EXIT_SUCCESS;
}
