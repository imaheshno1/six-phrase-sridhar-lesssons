#include<stdio.h>
#include<stdlib.h>
struct dllNode
{
    struct dllNode * prev;
    int num;
    struct dllNode * next;
};

struct dllNode * start;
struct dllNode * last;
struct dllNode * newNode;
struct dllNode * tptr;


void addNode( int data )
{
    newNode = (struct dllNode * ) malloc( sizeof ( struct dllNode ));
    newNode->prev = NULL;
    newNode->next = NULL;
    newNode->num = data;
    if( start == NULL)
    {
        start = last = newNode;
        return;
    }
    for( tptr = start; tptr && newNode->num > tptr->num; tptr=tptr->next);
    if ( tptr == start )
    {
        newNode->next = start;
        start->prev = newNode;
        start = newNode;
    } else if ( tptr == NULL)
    {
        last->next = newNode;
        newNode->prev = last;
        last = newNode;
    }
    else
    {
        newNode->next = tptr;
        newNode->prev = tptr->prev;
        tptr->prev->next = newNode;
        tptr->prev = newNode;
    }
}


void showFor( )
{
    for( tptr = start; tptr ; tptr = tptr->next)
        printf("%d ", tptr->num);

    printf("\n\n");
}

void showBack( )
{
    for( tptr = last ; tptr ; tptr = tptr-> prev)
        printf("%d ", tptr->num);

    printf("\n\n");
}






int main()
{
    addNode(12);
    addNode(36);
     addNode(44);
     addNode(45);
     addNode(10);
     addNode(55);
     addNode(26);
     addNode(61);
     addNode(77);
     addNode(11);
     addNode(20);
     addNode(21);
     showFor();
     showBack();



    return EXIT_SUCCESS;
}
