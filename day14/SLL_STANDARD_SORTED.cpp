#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};

typedef struct sll
{
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
   struct node * tptr;
   struct node * prev;
   for ( tptr = gl.start,prev=NULL; tptr && newNode->data > tptr->data; prev=tptr, tptr = tptr->next );
   if ( tptr == gl.start )
   {
       newNode->next = gl.start;
       gl.start = newNode;
   }
   else
   {
       prev->next = newNode;
       newNode->next = tptr;
   }
   gl.non+=1;

}
void show(SLL gl )
{
    struct node * tptr ;
    if ( gl.start == NULL)
    {
        printf("Empty List!!!!!\n");
        return;
    }
    for( tptr = gl.start; tptr ; tptr = tptr->next)
    {
        printf("%d ", tptr->data);
    }
    printf("\n\n");
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



int main() // integer data
{
    SLL lis1;
    SLL lis2;
    SLL lis3;
    makeList(lis1); // = []
    makeList(lis2);
    makeList(lis3);

    addNode(13, lis1);
    addNode(16, lis3);
    addNode(22, lis2);
    addNode(37, lis1);
    addNode(45, lis2);
    addNode(20, lis2);
    addNode(10, lis1);
    addNode(11, lis1);
    addNode(12, lis2);
    addNode(88, lis3);
    addNode(14, lis1);
    addNode(21, lis3);
    addNode(47, lis2);
    addNode(15, lis1);
    show( lis1 );
    show( lis2 );
    show( lis3 );
    delNode( 12, lis2);
    delNode(14, lis1);
    printf("After Deletion\n~~~~~ ~~~~~~~\n");
    show( lis1 );
    show( lis2 );
    delNode( 13 , lis1 );
    delNode(16 , lis3);
    printf("After Deletion\n~~~~~ ~~~~~~~\n");
    show( lis1 );
    show( lis3 );
    delNode(15, lis1);
    delNode( 47, lis2);
    delNode (21, lis3);
    show(lis1);
    show(lis2);
    show(lis3);
    delNode(88, lis3);
    show(lis3);


}
