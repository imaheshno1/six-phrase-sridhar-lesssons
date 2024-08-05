#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
struct node
{
    struct node *left;
    int data;
    struct node *right;
};

struct BST
{
    struct node * root;
    int non;


BST ()
{
    this->root = NULL;
    non = 0;
}
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
   printf("%02d",dispptr->data);
   row+=2;
   draw_tree(start,end/2 + start/2,dispptr->left);
   draw_tree(end/2  +start/2 + 1, end , dispptr -> right);
   row-=2;
   }
}


void addNode( int num , BST & tree)
{
    struct node *newNode;
    newNode = (struct node *) calloc(1, sizeof (struct node ));
    newNode->data = num;
    if( tree.root == NULL)
    {
        tree.root = newNode;
        tree.non = 1;
        return;
    }
    struct node * tptr;
    struct node * prev;
    for( tptr = tree.root; tptr; prev=tptr, tptr = newNode->data > tptr->data ? tptr->right : tptr->left);
    if (prev->data > newNode->data )
    {
        prev->left = newNode;
    }
    else
        prev->right = newNode;
}
void inOrder_helper ( struct  node * addr )
{
    if ( addr )
    {
        inOrder_helper ( addr->left );
        printf("%d ", addr->data);
        inOrder_helper ( addr->right);
    }
}
void inOrder( BST gt)
{
    inOrder_helper(gt.root);
}

int main()
{
  int arr [] = {40,20,60,10,30,50,70,5,15,25,35,45,55,65,75,2,7,12,17,22,27,32,37,42,47,52,57,62,67,72,77};
  int arr_ind;
  int arr_size;
  BST tree1;
  arr_size = sizeof arr / sizeof arr [ 0 ];
  for( arr_ind = 0; arr_ind < arr_size; arr_ind += 1)
  {
      addNode(arr[arr_ind], tree1);
  }
  draw_tree(1,80, tree1.root);
  printf("\n\n\n\n");\
  inOrder(tree1);
//  preOrder(tree1);
//  postOrder(tree1);
  // levelOrder();





}
