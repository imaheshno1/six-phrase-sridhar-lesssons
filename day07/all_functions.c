int available=123456;
static int onlyHere=10000000;
static int only_4_me()
{

}
int sumOfDigits( long long int data)
{
    long long int copy_data;
    int sod;
    for( copy_data = data, sod = 0; copy_data != 0; copy_data/=10)
    {
        sod += (copy_data % 10);
    }
    return sod;
}
int numberOfDigits ( long long int data)
{
    long long int copy_data;
    int nod;
    for ( nod =0, copy_data = data; copy_data ; copy_data/=10)
    {
        nod += 1;
    }
    return nod;
}
long long int power ( int base , int exponent)
{
    long long int res;
    int multiplyCtr;
    for ( res = 1, multiplyCtr = 0; multiplyCtr < exponent ; multiplyCtr+=1)
    {
        res = res * base;
    }
    return res;
}
long long int power10( int exponent)
{
    return power(10, exponent);
}
long long int reverser( long long int num )
{
    long long int copy_num;
    long long int revNum;
    for( revNum = 0, copy_num = num; copy_num; copy_num/=10)
        revNum = revNum * 10 + (copy_num%10);

    return revNum;
}
int isUpper ( char ch)
{
    return (ch >= 'A' && ch <= 'Z');
}
int isLower( char ch)
{
    return ( ch >= 'a' && ch <= 'z');
}
int isAlphabet ( char ch )
{
    return (isUpper(ch) || isLower (ch ));
}
int toUpper( char ch )
{
    if ( ch >= 'a' && ch <= 'z')
        return ch - 32;
        else
        return ch;
}
int toLower( char ch )
{
    if ( ch >= 'A' && ch<= 'Z')
        return ch + 32;
    else
        return ch;
}
int sumOfFactors ( int data )
{

}
int isPrime ( long long int data )
{

}
int isLeap ( int year )
{

}
