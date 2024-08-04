int main()
{
    int num;
    num = 1264;
    // b1 b2 b3 b4
    // b4 b3 b2 b1
    // 0000 0000 0000 0000 0000 0100 1111 0000
    //    MSB                         LSB
    //    0n         0         4       -ve
    char * ptr;
    ptr = &num;
    printf("%d %d %d %d\n", *ptr, *(ptr+1), *(ptr+2), *(ptr+3));



}
