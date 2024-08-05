#include<stdio.h>
#include<stdlib.h>
int derangement(int n);
int derangement_helper( int n);
int main()
{
    int n;
    int res;

    scanf("%d", &n);
    res = derangement ( n );
    printf("!%d = %d\n", n, res);

    return EXIT_SUCCESS;
}
int derangement(int n)
{
    // set an environment
    // call a helper - recursive
    return derangement_helper ( n );
}
int derangement_helper( int n)
{
    if ( n == 0) return 1;
    if ( n == 1) return 0;
    return (n-1)* ( derangement_helper(n-1) + derangement_helper(n-2));
}

