#include<stdio.h>
#include<stdlib.h>

typedef struct dllNode
{
    struct dllNode *prev;
    int data;
    struct dllNode *next;
} DLLNODE;
typedef DLLNODE * DLLNODE_PTR;
typedef struct dll
{
    DLLNODE_PTR start;
    DLLNODE_PTR last;
    int non;

    dll()
    {
        start = NULL;
        last = NULL;
        non = 0;
    }
} DLL;



void addNode ( int data, DLL & gl)
{
    DLLNODE_PTR nn;
    nn = (DLLNODE_PTR) calloc(1, sizeof(DLLNODE));
    nn->data  = data;

    if ( gl.non == 0)
    {
        gl.start=gl.last=nn;
        gl.non=1;
        return;
    }
    DLLNODE_PTR tptr;
    for ( tptr = gl.start; tptr && nn->data > tptr->data; tptr=tptr->next);
    if ( tptr == gl.start )
    {
        nn->next = gl.start;
        gl.start->prev = nn;
        gl.start = nn;
    } else if ( tptr == NULL)
    {
        nn->prev = gl.last;
        gl.last->next = nn;
        gl.last = nn;
    } else
    {
        nn->prev = tptr->prev;
        nn->next = tptr;
        tptr->prev->next = nn;
        tptr -> prev = nn;
    }

}
void showFor ( DLL gl )
{
    DLLNODE_PTR tptr;
    if ( gl.non == 0)
    {
        printf("Empty List!!!!!!!");
        return;
    }
    for( tptr = gl.start ; tptr ; tptr=tptr->next)
        printf("%d ", tptr->data );

    printf("\n\n");
}
void showBack(DLL gl )
{
    DLLNODE_PTR tptr;
    if ( gl.non == 0)
    {
        printf("Empty List!!!!!!!");
        return;
    }
    for( tptr = gl.last ; tptr ; tptr=tptr->prev)
        printf("%d ", tptr->data );

    printf("\n\n");
}
int main()
{
    DLL l1;
    DLL l2;
    DLL l3;

    addNode(21, l1);
    addNode(43, l3);
    addNode(55, l2);
    addNode(11, l1);
    addNode(59, l3);
    addNode(72, l2);
    addNode(63, l2);
    addNode(31, l3);
    addNode(77, l1);
    addNode(55, l2);
    addNode(12, l3);
    addNode(20, l1);
    addNode(19, l2);
    addNode(25, l3);
    addNode(76, l3);
    addNode(26, l1);
    addNode(32, l2);
    addNode(53, l3);
    addNode(99, l2);
    showFor(l1);
    showFor(l2);
    showFor(l3);
    showBack(l1);
    showBack(l2);

    showBack(l3);






    return EXIT_SUCCESS;
}


