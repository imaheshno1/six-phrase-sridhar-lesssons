#include<stdio.h>
#include<stdlib.h>
long long int  fibo ( int term);
long long int fibo_helper( int term);
int main()
{

    int term;
    scanf("%d", &term);
    printf("%dth term of fibo = %d", term, fibo(term) );

    return EXIT_SUCCESS;
}
long long int fibo ( int term)
{
    // set an environment
    // call a function - recursive
    return fibo_helper(term  );
}
long long int fibo_helper( int term)
{
    if ( term == 0) return 0LL;
    if ( term == 1) return 1LL;
    return fibo_helper(term-1) + fibo_helper(term-2);
}
