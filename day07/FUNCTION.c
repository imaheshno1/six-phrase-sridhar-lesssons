#include<stdio.h>
#include<stdlib.h>
// function signature / prototype / declaration
// storage classification  specifier
// auto, static, extern
// register volatile


void a ( void );
void b ( );
void c ();
void d();
int add ( int , int );
int power ( int base, int);

int outSide_main=1111;; // global

int main()
{
    int n1;
    int n2;
    int n3;
    printf("main()\n");
    printf("address of n1 = %u\n", &n1);
    printf("address of n2 = %u\n", &n2);
    printf("address of n3 = %u\n", &n3);
    printf("outside main = %u\n", &outSide_main);
    {
    int n1;
    int n2;
    int n3;
        int outSide_main=2222;

    printf("main()\n");

    printf("address of n1 = %u\n", &n1);
    printf("address of n2 = %u\n", &n2);
    printf("address of n3 = %u\n", &n3);
    printf("outside main = %u\n", &outSide_main);

    }

    a();
   // b();
   // c/();
    //\d();

    return EXIT_SUCCESS;
}
int down_main;
//strtok ( ) // "one two three four five six" , " "
            // one\0two\0three\0four\0five\0six"
            // ^    ^    ^      ^     ^     ^  ^
void a(void)
{
    static int ctr;

    auto int n1;
    int n2;
    int n3;
    printf("a()\n");
    printf("address of n1 = %u\n", &n1);
    printf("address of n2 = %u\n", &n2);
    printf("address of n3 = %u\n", &n3);
    printf("address of static ctr = %u\n", &ctr);
   // b();
}
void b ( )
{
    int n1;
    int n2;
    int n3;
    printf("b()\n");
    printf("address of n1 = %u\n", &n1);
    printf("address of n2 = %u\n", &n2);
    printf("address of n3 = %u\n", &n3);
 //   c();
   // d();
}
void c ()
{
    int n1;
    int n2;
    int n3;
    printf("c()\n");
    printf("address of n1 = %u\n", &n1);
    printf("address of n2 = %u\n", &n2);
    printf("address of n3 = %u\n", &n3);
    //d();
}
void d()
{
    int n1;
    int n2;
    int n3;
    printf("d()\n");
    printf("address of n1 = %u\n", &n1);
    printf("address of n2 = %u\n", &n2);
    printf("address of n3 = %u\n", &n3);

}
