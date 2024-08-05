/*


enque
keep in the queue
rear will be altered
for the first node head and rear will be altered

deque
alter the front



front
rear
non
*/



#include<stdio.h>
#include<stdlib.h>
struct node
{
    int waiting;
    struct node * next;
};

struct q
{
    struct node * front;
    struct node * rear;
    int non;
    q()
    {
        front = NULL;
        rear = NULL;
        non = 0;
    }
};
typedef struct q QUEUE;
void enque ( int value,  QUEUE & q)
{
    struct node * nn;
    nn = ( struct node * ) calloc(1, sizeof ( struct node));
    nn->waiting = value;
    if ( q.front == NULL)
    {
        q.front = q.rear = nn;
    }
    else
    {
        q.rear->next = nn;
        q.rear = nn;
    }
    q.non+=1;
}

int deque (QUEUE & q)
{
    int  giveBack;
    giveBack = q.front->waiting;
    struct node *toDel;
    toDel = q.front;
    q.front = q.front->next;
    if ( q.front == NULL)
    {
        q.rear = NULL;
    }
    q.non-=1;
    free(toDel);
    return giveBack;
}
int isEmpty ( QUEUE q )
{
    return ! (q.non);

}
int main()
{
    QUEUE q;
    enque( 13, q);
    enque( 23, q);
    enque( 33, q);
    enque( 43, q);
    enque( 53, q);
    enque( 63, q);
    enque( 73, q);
    enque( 83, q);
    enque( 93, q);
    if ( isEmpty (q))
        printf("None in Queue");
    else
    printf("%d moved out of Q\n", deque(q));
    if ( isEmpty (q))
        printf("None in Queue");
    else
    printf("%d moved out of Q\n", deque(q));
    if ( isEmpty (q))
        printf("None in Queue");
    else
    printf("%d moved out of Q\n", deque(q));
    if ( isEmpty (q))
        printf("None in Queue");
    else
    printf("%d moved out of Q\n", deque(q));
    if ( isEmpty (q))
        printf("None in Queue");
    else
    printf("%d moved out of Q\n", deque(q));
    if ( isEmpty (q))
        printf("None in Queue");
    else
    printf("%d moved out of Q\n", deque(q));
    if ( isEmpty (q))
        printf("None in Queue");
    else
    printf("%d moved out of Q\n", deque(q));
    if ( isEmpty (q))
        printf("None in Queue");
    else
    printf("%d moved out of Q\n", deque(q));
    if ( isEmpty (q))
        printf("None in Queue");
    else
    printf("%d moved out of Q\n", deque(q));
    if ( isEmpty (q))
        printf("None in Queue");
    else
    printf("%d moved out of Q\n", deque(q));
    if ( isEmpty (q))
        printf("None in Queue");
    else
    printf("%d moved out of Q\n", deque(q));

}












