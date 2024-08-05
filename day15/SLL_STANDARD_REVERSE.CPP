#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct sll
{
    struct node * toLoop;
    struct node * start;
    struct node *last;
    int non;

} SLL ;
void makeList( SLL & gl )
{
    gl.start = NULL;
    gl.last = NULL;
    gl.non=0;
}
void reverseSLL( SLL & gl )
{
    struct node * tptr;
    struct node * previousNode;
    struct node * nextNode;
    struct node * safe;


    tptr = gl.start;
    safe = gl.start;
    previousNode  = NULL;
    while ( tptr)
    {
    nextNode = tptr->next;
    tptr->next = previousNode;
    previousNode = tptr;
    tptr = nextNode;
    }
    gl.start = previousNode;
    gl.last = safe;

}
void addNode( int data, SLL & gl )
{
   struct node *newNode;
   newNode = ( struct node *) calloc(1, sizeof(struct node));
   newNode->data = data;
   if ( gl.non == 0 )
   {
       gl.start = newNode;
       gl.last = newNode;
       gl.non = 1;
       return;
   }
   gl.last -> next = newNode;
   gl.last = newNode;
   gl.non+=1;
   if ( gl.non == 6)
   {
       gl.toLoop = newNode;
   }
}
void show(SLL gl )
{
    struct node * tptr ;
 //   printf("number of nodes = %d\n", gl.non);
    for( tptr = gl.start; tptr ; tptr = tptr->next)
    {
        printf("%d ", tptr->data);
   //     getch();
    }
    printf("\n\n");
}

void makeLoop( SLL & gl )
{
    gl.last->next = gl.toLoop;
}
void delNode(int delNum, SLL & gl )
{
    struct node * tptr;
    struct node * prev;
    for ( tptr = gl.start,prev=NULL; tptr && tptr->data != delNum ; prev=tptr,tptr = tptr->next);
    if ( tptr == NULL)
        printf("Node Not Found!!!!!");
    else
    {
        if ( prev == NULL )
        {
             // if only one node
             if ( gl.non == 1)
             {
                 gl.start = gl.last = NULL;
                 gl.non = 0;
             }
             else
             {
                 gl.start = gl.start->next;
                 gl.non -= 1;
             }
        }
        else
        {
            prev->next = tptr->next;
        }
    }

}

#define LOOP_REMOVED 1
#define NOLOOP 0
int detect_loop_and_remove_l1( SLL gl )
{
    int number_of_elements = gl.non;
    struct node * array_address[ number_of_elements ]; // VLA
    struct node *tptr;
    int array_address_ind;
    for( array_address_ind = 0; array_address_ind < number_of_elements ; array_address_ind+=1)
    {
        array_address [ array_address_ind ] = NULL;
    }
    for ( tptr = gl.start ; tptr ; tptr = tptr->next)
    {
        for( array_address_ind = 0; array_address [ array_address_ind ] ; array_address_ind += 1)
        {
            if ( array_address [ array_address_ind ] == tptr )
                {
                    array_address [ number_of_elements - 1]->next = NULL;
                    return LOOP_REMOVED;
                }
        }
        array_address [ array_address_ind ] = tptr;

    }
    return  NOLOOP;
}





/*



0       100
1       200
2       300
3       400
4       500
5       600
6       700
7       800
8       900
9       1000
10      1100
11      1200
12      1300
13      1400
1->2->3->4->5->6->
               t
*/














void sort_selection(SLL & gl)
{
    struct node * scopeBegin;
    struct node * walker;
    int small;
    struct node *addrSmall;
    int temp;
    for( scopeBegin = gl.start; scopeBegin ; scopeBegin = scopeBegin->next)
    {
        small = scopeBegin->data;
        addrSmall = scopeBegin;
        for( walker = scopeBegin ->next; walker ; walker = walker->next)
        {
            if (walker -> data < small)
            {
                small = walker->data;
                addrSmall = walker;
            }
        }
        // swap
        temp = scopeBegin->data;
        scopeBegin->data = small;
        addrSmall->data = temp;
    }
}


void sort_bubble(SLL & gl)
{
    struct node * outer;
    struct node * inner;
    int temp;
    for( outer = gl.start; outer ; outer = outer->next)
    {
        for ( inner = gl.start; inner->next ; inner = inner->next)
        {
            if ( inner->data > inner->next->data)
            {
                temp = inner->data;
                inner->data = inner->next->data;
                inner->next->data = temp;
            }
        }
    }
}
void sort_insertion( SLL & gl)
{
    struct node * proc;
    struct node * safe;
    struct node *tptr;
    struct node *prev;



    proc = gl.start->next;
    gl.start->next =  NULL;





    for(; proc ; proc = safe )
    {
        safe = proc->next;
        proc->next = NULL;
        for( tptr = gl.start , prev = NULL ; tptr && proc->data > tptr->data; prev = tptr, tptr= tptr->next);
        if ( prev == NULL)
        {
            proc->next = gl.start;
            gl.start = proc;
        }
        else
        {
            prev->next = proc;
            proc->next = tptr;
        }
    }








}


int main() // integer data
{
    SLL lis1;
    makeList(lis1); // = []

    addNode(13, lis1);
    addNode(16, lis1);
    addNode(22, lis1);
    addNode(37, lis1);
    addNode(45, lis1);
    addNode(20, lis1);
    addNode(10, lis1);
    addNode(11, lis1);
    addNode(12, lis1);
    addNode(88, lis1);
    addNode(14, lis1);
    addNode(21, lis1);
    addNode(47, lis1);
    addNode(15, lis1);

    show( lis1 );
    makeLoop(lis1);
    printf("%s\n" , detect_loop_and_remove_l1(lis1)==LOOP_REMOVED ? "Loop Found , Removed!!!!" : "NO Loop");
    show( lis1 );
    //sort_selection(lis1);
    //sort_bubble(lis1);
    sort_insertion(lis1);
    show(lis1);

    return EXIT_SUCCESS;
}
