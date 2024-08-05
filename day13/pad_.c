#include<stdio.h>
#include<stdlib.h>
typedef struct demo
{
    char ch1; // 1 , 3 padding
    int num1; // 4
    char ch2; // 1, 3 padding
    int num2; // 4
} Demo;
int main()
{

    printf("sizeof(demo) = %d\n", sizeof(Demo));
    Demo inst1;
    Demo inst2 = {'A', 1264,'S', 1232};
    inst1.ch1 = 'X';
    inst1.num1 = 1111;
    inst1.ch2 = 'Y';
    inst1.num2 = 222;


}
