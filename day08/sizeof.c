/*
1) sizeof() is an operator
2) () is not a mandate if identifier or value is specified, it is a mandate
it data type is used
3) it returns an unsigned value
4) it is a compile time operator


*/

int main()
{
    printf("%u\n", sizeof 1);
    printf("%u\n", sizeof 1LL);
    printf("%u\n", sizeof ('A'));
    printf("%u\n", sizeof ("Banana"));;


}
