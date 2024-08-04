#include<stdio.h>
#include<stdlib.h>
// 100       110 114 118  122 126
// 100
// 110
// 114
// 118
// 122
// 126
// arguments one two 5.78 897 three
//     0      1   2  3     4    5
int main( int argc, char * argv[] , char *envp[]) // argc , arguments
{

    int ind;
    printf("Arguments count is : %d\n" , argc);
    for( ind = 0; ind < argc ; ind +=1)
    {
        printf("%s\n", argv[ind]);
    }
    for( ind = 0; envp[ind]; ind+=1)
    {
        printf("%s\n", envp[ind]);
    }

    return EXIT_SUCCESS;
}
