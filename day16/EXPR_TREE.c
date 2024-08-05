

/*
Stack using Array
*/



struct node
{
    // operator or an oparand
    // 0 to 9 -> operand
    // + - * / % ^ -> operator
    char operator_or_operand;
    struct node * next;


};


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


void push ( struct node * keep, STACK & s)
{

    s.top += 1;
    s.waiting [ top ] = keep ;
}

struct node * pop( STACK & s)
{
   struct node * giveBack;
   giveBack = s.waiting [ top ];
   s.waiting [ top ] = NULL;
   top-=1;
   return giveBack;
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

    return EXIT_SUCCESS;
}













