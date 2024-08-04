// printf() _printf()
// main() _main()
// f(a,b,c,d,e)
// res = f(a,b,c,d,e); a to e pascal type of processing, e -> a 'C' type of
// pascal int func( int n1, int n2 int n3) -> FUNC

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch1;
    char ch2;
    ch1 = getchar();
    fflush ( stdin );
    ch2 = getchar();
    printf("%d %d\n", ch1, ch2);
    if (ch1 == ch2)
      puts("Equal");
    else
        puts("Not =");

    return EXIT_SUCCESS;
}
