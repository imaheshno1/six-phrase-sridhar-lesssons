#include<stdio.h>
#include<stdlib.h>
int threeFour ( int term);
int threeFour_helper( int term);
int main()
{

    int n;
    scanf("%d", &n);
    int term;
    for ( term = 0; term <= n; term+=1)
    {
        printf("%d\t%d\n",term, threeFour ( term ));
    }



    return EXIT_SUCCESS;
}
int threeFour ( int term)
{
    // set an environment
    // call the helper - recursive
    threeFour_helper( term );
}
int threeFour_helper( int term)
{
    if ( term == 0) return 3;
    if ( term == 1) return 4;
    int motherValue;
    motherValue = threeFour_helper ( (term/2 ) - 1);
    if ( term % 2 ==0)
        return motherValue * 10 + 3;
    else
        return motherValue * 10 + 4;
}
