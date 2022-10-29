// creatin a linked list
#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};


//insert a node in beginning
void ins_begin(struct Node** hptr, int no) //4 steps
{
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = no;
	new_node->next = (*hptr); //next of new node is head ptr
	(*hptr) = new_node;//hptr is new node
}

//insert after a given position
void ins_after(struct Node* prev_node, int no) //5 steps
{

	if (prev_node == NULL) {
		printf("the given previous node cannot be NULL");
		return;
	}
	
	struct Node* new_node
		= (struct Node*)malloc(sizeof(struct Node));
	new_node->data = no;
	new_node->next = prev_node->next; //next of new node is previous node's next
	prev_node->next = new_node;//and previous node's next is new node
}
//here in this code prev_node is given so we aren't iterating to find position of prev_node

//insert at the end, here we will traverse till the end
void append(struct Node** hptr, int no)
{
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	struct Node *last = *hptr;
	new_node->data = no;
	new_node->next = NULL; //last node's next is NULL

	/*If the Linked List is empty, then make the new node as head */
	if (*hptr == NULL)
	{
	*hptr = new_node;
	return;
	}
else{
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}
}

void printList(struct Node *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->next;
  }
}
 
int main()
{
 
  struct Node* head = NULL;
 
  append(&head, 6);
 
  ins_begin(&head, 7);
 
 
  ins_begin(&head, 1);
 
  append(&head, 4);
 
  // 1->7->8->6->4->NULL
  ins_after(head->next, 8);
 
  printf("\n Created Linked list is: ");
  printList(head);
 
  return 0;
}
