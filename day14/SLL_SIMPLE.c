#include<stdio.h>
#include<stdlib.h>
typedef struct sllNode
{
    // data
    // link(s)
    int num;
    struct sllNode * next;
} SLLNODE;

typedef SLLNODE * SLLNODE_PTR;
SLLNODE_PTR start; // arr
SLLNODE_PTR newNode;
SLLNODE_PTR tptr;
SLLNODE_PTR prev;
void addNodeAT( int data, int index)
{
   int ind;
   newNode = (SLLNODE_PTR) calloc(1,sizeof (SLLNODE));
   newNode->num = data;
   // 1->2->3->4->5->6->7->8->9->10
   // 7, 77
   // 1  2  3  4  5  6
   // 1->2->3->4->5->6->77->7->8->9->10

   for( tptr = start, ind = 1; ind < ( index - 1) ; tptr=tptr->next , ind += 1);
       newNode -> next = tptr->next;
       tptr->next = newNode;
}





void delNode( int delnum)
{
    for(tptr = start,prev = NULL; tptr->num != delnum; prev = tptr , tptr = tptr->next);
    if ( prev == NULL)
    {
        start = start->next;
    }
    else
        prev->next = tptr->next;
    free(tptr);
}
void addNode(int data)
{
    newNode = (SLLNODE_PTR) malloc(sizeof(SLLNODE));
    newNode->num = data;
    newNode->next = NULL;
    if ( start == NULL)
        start = newNode;
        else
    {
    for( tptr = start; tptr ; prev=tptr, tptr = tptr->next);
     prev->next = newNode;
    }
}
void showSLL()
{
    for ( tptr = start; tptr != NULL; tptr=tptr->next)
    {
        printf("%d ", tptr->num);
    }
    printf("\n\n");
}
int main()
{

    addNode(12);
    addNode(10);
    addNode(15);
    addNode(69);
    addNode(13);
    addNode(40);
    addNode(30);
    addNode(47);
    addNode(20);
    addNode(16);
    showSLL();
    addNodeAT(77,7);
    showSLL();


    return EXIT_SUCCESS;
}
