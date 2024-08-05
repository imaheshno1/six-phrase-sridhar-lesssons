#include<stdio.h>
//using namespace std;

struct ListNode
{
	int data;
	struct ListNode* next;
};

typedef struct ListNode Node;
Node* head = NULL;

void show(Node* head)
{
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head = head->next;
	}
}

Node* insert_back(Node* head,int data)
{
	Node* curr;
	Node* new_node = (Node*) malloc(sizeof(Node));
	new_node -> data = data;
	new_node -> next = NULL;

	if(head == NULL)
	{
		head = new_node;
	}
	else
	{
		curr = head;
		while(curr->next!=NULL)
		{
			curr = curr->next;
		}

		curr->next = new_node;
	}
	return head;
}

Node* delete_first(Node* head)
{
	Node* tptr = head;
	head = head -> next;
	free(tptr);
	return head;
}

Node* delete_last(Node* head)
{
	Node* prev = NULL;
	Node* curr = head;
	while(curr->next!=NULL)
	{
		prev = curr;
		curr = curr->next;
	}
	free(curr);
	prev->next = NULL;
	return head;
}

Node* delete_middle(Node* head, int data)
{
	Node* prev = NULL;
	Node* curr = head;
	while(curr->data != data)
    {
    	prev = curr;
    	curr = curr->next;
	}
	Node* tptr = curr;
	prev -> next = curr->next;
	free(tptr);
	return head;
}
int main()
{
	head = insert_back(head,10);
	head = insert_back(head,5);
	head = insert_back(head,1);
	head = insert_back(head,6);
	head = insert_back(head,90);
	head = delete_first(head);
	show(head);
	printf("\n\n");

	head = delete_last(head);
	show(head);
	printf("\n\n");

	head = delete_middle(head,1);
	show(head);
}
