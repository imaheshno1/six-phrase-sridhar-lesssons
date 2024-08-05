#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int nod_num;
    int copy;
    for ( num = 1; num <= 10000000; num += 1)
    {
    //
    nod_num = 0;
    copy = num;
    while ( copy )
    {
        nod_num += 1;
        copy /= 10;
    }


    int elements[ nod_num + 1]; // 183186 0 1 2 3 4 5 6
                                //        1 8 3 1 8 6
    int elements_ind;
    int shift;
    int sum_ind;

    copy = num;
    elements_ind = nod_num - 1;
    elements [ nod_num ] = 0;
    while (  copy )
    {
        elements [ elements_ind ] = copy % 10;
        elements [ nod_num ] += (copy % 10);
        copy /= 10;
        elements_ind -= 1;
    }
    while ( elements [ nod_num ] < num )
    {
        for ( shift = 1; shift <= nod_num ; shift+=1)
        {
            elements [ shift - 1 ] = elements [shift ];
        }
        elements [ nod_num  ] = 0;
        for( sum_ind = 0; sum_ind < nod_num ; sum_ind += 1)
        {
            elements [ nod_num ] += elements [ sum_ind ];
        }

    }
    if ( elements [ nod_num ] == num )
        printf("%d ", num);
    }







    return EXIT_SUCCESS;
}
