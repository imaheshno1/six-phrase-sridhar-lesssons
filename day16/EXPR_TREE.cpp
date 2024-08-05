#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
/*
Stack using Array
*/
struct node
{
    // operator or an oparand
    // 0 to 9 -> operand
    // + - * / % ^ -> operator
    struct node *left;
    char operator_or_operand;
    struct node *right;


};

void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void draw_tree( int start  , int end ,  struct node  * dispptr)
{
   int col;
   static int row = 4;
   col = (end - start )/ 2 + start;
   if(dispptr!=0)  {
   gotoxy(col,row);
   printf("%c",dispptr->operator_or_operand);
   row+=2;
   draw_tree(start,end/2 + start/2,dispptr->left);
   draw_tree(end/2  +start/2 + 1, end , dispptr -> right);
   row-=2;
   }
}






struct stack
{
    struct node * waiting [ 50];
    int top;
    int non;

    stack()
    {
        int ind;
        for( ind = 0; ind < 50; ind += 1)
            waiting [ ind ] = NULL;
        non = 0;
        top = -1;
    }
};
typedef struct stack STACK;

#define TRUE 1
#define FALSE 0
int isOperand(char ch)
{
    return ch >= '0' && ch <= '9' ? TRUE : FALSE;
}
void push ( struct node * keep, STACK & s)
{

    s.top += 1;
    s.waiting [ s.top ] = keep ;
}

struct node * pop( STACK & s)
{
   struct node * giveBack;
   giveBack = s.waiting [ s.top ];
   s.waiting [ s.top ] = NULL;
   s.top-=1;
   return giveBack;
}


int solve(struct node * parent)
{
    int leftVal;
    int rightVal;
    if ( parent->left == NULL && parent->right == NULL )
    {
        return parent->operator_or_operand - '0';
    }
    leftVal = solve(parent->left);
    rightVal = solve(parent->right);
    char ch;
    ch = parent->operator_or_operand;
    switch (ch )
    {
        case '+' : return leftVal + rightVal;
        case '-' : return leftVal - rightVal;
        case '*' : return leftVal * rightVal;
        case '/' : return leftVal / rightVal;
        case '%' : return leftVal % rightVal;
        case '^' :
            {
                int multiplyCtr;
                int res;
                for( res = 1, multiplyCtr = 0; multiplyCtr < rightVal; multiplyCtr +=1)
                {
                    res *= leftVal;
                }
                return res;
            }

    }
}
int main()
{
    char postFix [] = "36+28+*82/35^**";
    int pf_ind;
    char ch;
        STACK s;
        struct node * nn;
        struct node * root;
    for( pf_ind = 0; postFix[pf_ind];pf_ind+=1)
    {
            ch = postFix[pf_ind];
            nn = (struct node *) calloc(1,sizeof(struct node));
            nn->operator_or_operand = ch;

        if ( isOperand(ch) == TRUE)
        {
            push(nn, s);
        }
        else
        {
           nn->right = pop(s);
           nn->left = pop(s);
           push( nn, s);
        }
    }
    root = pop(s);
    draw_tree(1, 80, root);
    int outputVal;
    outputVal = solve(root);
    gotoxy(1,1);
    printf("Value of the Equation = %d\n", outputVal);
    return EXIT_SUCCESS;

}













