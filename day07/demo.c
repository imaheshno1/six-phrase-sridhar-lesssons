#include<stdio.h>
#include<stdlib.h>
#define PI 3.1415926
#define square(a) ((a)*(a))
#define max(a,b) (((a)>(b))?(a):(b))

int main()
{
    double radius;
    double area;
    radius = 5.8965;
    area = PI * radius * radius;
    int n1;
    int n2;
    int n3;
    int n4;
    int big;
    n1 = 12;
    n2 = 45;
    n3 = 90;
    n4 = 66;
    big = max(max(n1,n2),max(n3,n4));
    printf("%d\n", square(10));
    printf("%d\n", square(6+4)); // 6+4*6+4
    return EXIT_SUCCESS;
}

