#include<stdio.h>
#include<stdlib.h>
void helper ( char str[], int work_ind, char * charsp[], char opStr[], int opStr_ind )
{
    // enumerate
    // choose
    if ( str[work_ind] == NULL)
    {
        printf("%s ", opStr);
        return;
    }
    int myWorkLen;
    int ind;
    ind = str[work_ind] - '0';
    for( myWorkLen = 0; charsp[ind][myWorkLen]; myWorkLen += 1);
    int getInd;
    for(getInd = 0; getInd < myWorkLen ; getInd+=1)
    {
        opStr[opStr_ind] = charsp[ind][getInd];
        opStr[opStr_ind+1]='\0';
        helper(str,work_ind+1,charsp,opStr,opStr_ind+1);
        opStr[opStr_ind]='\0';
    }
}
void solve(char str[] ) // 239
{
    // set am env
    char *chars[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int len;
    for(len = 0; str [ len ] ; len += 1);
    char opStr[len+1];
    // call helper revcursively
   helper( str,0,chars,opStr,0);

}
int main()
{
    solve("2349");
}
