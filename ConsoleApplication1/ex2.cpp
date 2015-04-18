#include<stdio.h>
#include<stdlib.h>

int hasStatic(int n) {
	static int x = 0;
	x += n;
	return x;

}

void test() {
	int sum = 0;
	for (int i = 1; i <= 4; ++i)
		sum += hasStatic(i);

	printf("Result of sum is %d.\n", sum);
}





/* Link list node */
struct node
{
	int data;
	struct node* next;
};

/* Function to get the nth node from the last of a linked list*/
void printNthFromLast(struct node* head, int n)
{
	int len = 0, i;
	struct node *temp = head;

	// 1) count the number of nodes in Linked List
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}

	// check if value of n is not more than length of the linked list
	//if (len < n)
		//return;

	temp = head;

	// 2) get the (n-len+1)th node from the begining
	for (i = 1; i < len - n + 1; i++)
		temp = temp->next;

	printf("%d", temp->data);

	return;
}

void push(struct node** head_ref, int new_data) //+		head_ref	0x0033ff24 {0x00000000 <NULL>}	node * *

{
	/* allocate node */
	struct node* new_node =
		(struct node*) malloc(sizeof(struct node));

	/* put in the data  */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Drier program to test above function*/
void main()
{
	/* Start with the empty list */
	//struct node* head = NULL;

	//// create linked 35->15->4->20
	//push(&head, 20);
	//push(&head, 4);
	//push(&head, 15);
	//push(&head, 35);

	//printNthFromLast(head, 5);
	//getchar();
	test();
}



//Following is a recursive C code for the same method.Thanks to Anuj Bansal for providing following code.

//void printNthFromLast(struct node* head, int n)
//{
//	static int i = 0;
//	if (head == NULL)
//		return;
//	printNthFromLast(head->next, n);
//	if (++i == n)
//		printf("%d", head->data);
//}