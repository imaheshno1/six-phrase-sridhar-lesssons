#include<stdio.h>
#include<stdlib.h>
void solver(char *str, int len, char *chars[], int work_ind, char * output, int oind)
{
    if ( len == oind)
    {
        printf("%s ", output);
        return;
    }
    int howMany;
    int index;
    index = str[work_ind]-'0';
    for( howMany = 0; chars[index][howMany]; howMany+=1);
    int ind;
    for( ind = 0; ind < howMany; ind+=1)
    {
        output[oind] = chars[index][ind];
        output[oind+1]='\0';
        solver(str,len,chars,work_ind+1, output,oind+1);
        output[oind]='\0';
    }
}
void solve(char *str)
{
    int len;
    for( len = 0; str [ len ];len+=1);
    char *output;
    output = (char * ) calloc(len+1,1);
    char * chars[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solver(str,len,chars,0,output,0);
}
int main()
{

    char str[]="2379";

    solve(str);

    return EXIT_SUCCESS;
}
