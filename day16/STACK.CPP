/*
Stack

push
alter the pointer/index
use that space

pop
use the pointer / index
alter the pointer / index

peek
query the value at top

*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int safe;
    struct node * next;
};

typedef struct stac
{
    struct node * top;
    int non;
    stac ()
    {
        printf("Consyructor Called\n\n");
        top = NULL;
        non = 0;
    }
} STACK;

void push ( int value, STACK &s)
{
    struct node * nn;
    nn = ( struct node * ) calloc(1, sizeof( struct node ));
    nn->safe = value;
    if ( s.top == NULL)
        s.top = nn;
    else
    {
       nn->next = s.top;
       s.top = nn;
    }
           s.non+=1;

}

int pop(STACK & s)
{
    int giveBack;
    if ( s.non == 0)
    {
        printf("Stack Empty!!!!!");
    }
    else
    {
    giveBack = s.top->safe;
    struct node * toDel;
    toDel = s.top;
    s.top=s.top->next;
    free ( toDel);
    s.non -=1;
    return giveBack;
    }
}
int isEmpty(STACK s)
{
    return s.non;
}
int main()
{
    STACK s1;
    push(12,s1);
    push(45,s1);
    push(89,s1);
    push(78,s1);
    push(65,s1);
    push(10,s1);
    push(17,s1);
    if ( isEmpty (s1 ))
    printf("popped = %d\n", pop(s1));
    push(27,s1);
    push(37,s1);
    if ( isEmpty (s1 ))

    printf("popped = %d\n", pop(s1));

    if ( isEmpty (s1 ))

    printf("popped = %d\n", pop(s1));
    if ( isEmpty (s1 ))

    printf("popped = %d\n", pop(s1));
    if ( isEmpty (s1 ))

    printf("popped = %d\n", pop(s1));
    if ( isEmpty (s1 ))

    printf("popped = %d\n", pop(s1));

    if ( isEmpty (s1 ))
    printf("popped = %d\n", pop(s1));

    if ( isEmpty (s1 ))
    printf("popped = %d\n", pop(s1));

    if ( isEmpty (s1 ))
    printf("popped = %d\n", pop(s1));

    if ( isEmpty (s1 ))
    printf("popped = %d\n", pop(s1));

    if ( isEmpty (s1 ))
    printf("popped = %d\n", pop(s1));

    if ( isEmpty (s1 ))
    printf("popped = %d\n", pop(s1));

    if ( isEmpty (s1 ))
    printf("popped = %d\n", pop(s1));

    if ( isEmpty (s1 ))
    printf("popped = %d\n", pop(s1));

    if ( isEmpty (s1 ))
    printf("popped = %d\n", pop(s1));

    if ( isEmpty (s1 ))
    printf("popped = %d\n", pop(s1));

    if ( isEmpty (s1 ))
    printf("popped = %d\n", pop(s1));

    /*
    +-------+-----+
    |  top  |  non|
    +-------+-----+
    */
//    makeStack(s1);
}











