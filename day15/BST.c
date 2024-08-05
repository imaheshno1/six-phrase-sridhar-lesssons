#include<stdio.h>
#include<stdlib.h>
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


BST ( )
{
    this->root = NULL;
    non = 0;
}
};


void addNode( int num , BST & tree)
{
    struct node *newNode;
    newNode = (struct node *) calloc(1, sizeof (struct node ));
    newNode->data = num;
    if( tree.root == NULL)
    {
        tree.root = newNode;
        non = 1;
        return;
    }
    struct node * tptr;
    struct node * prev;
    for( tptr = tree.root; tptr; prev=tptr, tptr = newNode->data > tptr->data ? tptr->right : tptr->left);
    if (prev->data > newNode )
    {
        prev->left = newNode;
    }
    else
        prev->right = newNode;
}
int main()
{
  int arr [] = {40,20,60,10,30,50,70,5,15,25,35,45,55,65,75};
  int arr_ind;
  int arr_size;
  BST tree1;
  arr_size = sizeof arr / sizeof arr [ 0 ];
  for( arr_ind = 0; arr_ind < arr_size; arr_ind += 1)
  {
      addNode(arr[arr_ind], tree1);
  }
  inOrder(tree1);
  preOrder(tree1);
  postOrder(tree1);
  // levelOrder();





}
