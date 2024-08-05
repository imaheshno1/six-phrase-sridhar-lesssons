// 3:23

#include<stdio.h>
#include<stdlib.h>
struct bst
{
    struct bst *left;
    int data;
    struct bst *right;
};
struct bst * root;
struct bst * newNode;
struct bst * prev;
struct bst * tptr;


struct qnode
{
    struct bst *waiting;
    struct qnode *next;
};


struct qnode *front;
struct qnode *rear;
void enq( struct bst * keep)
{
    struct qnode *qn;
    qn = (struct qnode *) calloc( 1, sizeof (struct qnode));
    qn->waiting = keep;
//   printf("%d ", keep->data);
  //  getchar();
    if ( front == NULL)
    {
        front = rear = qn;
    }
    else
    {
        rear->next = qn;
        rear = qn;
    }
}




struct bst * deq ()
{
   struct qnode * qtemp;
   struct bst * giveBack;
   if ( front ==  NULL)
    return NULL;
   giveBack = front-> waiting;
   qtemp = front;
   front=front->next;
  free(qtemp);

   if ( front == NULL)

   {
       rear = NULL;
   }
   return giveBack;
}


void levelorder()
{
    struct bst * proc;
    enq(root);
    do
    {
        proc = deq();
        if ( proc == NULL)
             break;

        printf("%d ", proc->data);

        if ( proc->left )
            enq(proc->left);
        if ( proc->right)
                enq(proc->right);

    }while ( 1 );






}



























void addNode(int value)
{
    newNode = (struct bst *) calloc(1, sizeof( struct bst ));
    newNode->data = value;
    if ( root == NULL)
    {
        root = newNode;
    }
    else
    {
        for( tptr = root; tptr; prev= tptr, tptr = newNode->data > tptr->data ? tptr->right : tptr->left);
    /*    {
            prev = tptr;
        }
*/
        if ( newNode ->data > prev->data )
        {
            prev->right = newNode;
        }
        else
            prev->left = newNode;
    }
}
void inOrder(struct bst * parent)
{
    if ( parent == NULL)
        return;

    inOrder(parent->left);
    printf("%d ", parent->data);
    inOrder( parent ->right );
}
int main()
{
   int arr [] = {40,20,60,10,30,50,70,5,15,25,35,45,55,65,75};
   // int arr [] = {40,20};
    int arr_ind;
    int arr_size;
    arr_size = sizeof arr / sizeof arr [ 0 ];
    for( arr_ind = 0; arr_ind < arr_size ; arr_ind += 1)
    {
        addNode(arr [ arr_ind ]);
    }
//    inOrder(root);
    printf("\n\n\n");
    levelorder();


    return EXIT_SUCCESS;
}
