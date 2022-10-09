
#include <stdio.h>
#include <stdlib.h>
struct Node {
	int val;
	struct Node* next;
};
void push(struct Node** up_ref, int data)
{
	struct Node* new_node
		= (struct Node*)malloc(sizeof(struct Node));
	new_node->val = data;
	new_node->next = (*up_ref);
	(*up_ref) = new_node;
}
void delet(struct Node** up_ref, int key)
{
	struct Node *tot = *up_ref, *prev;
	if (tot != NULL && tot->val == key) {
		*up_ref = tot->next; 
		free(tot);
		return;
	}
	while (tot != NULL && tot->val != key) {
		prev = tot;
		tot = tot->next;
	}
	if (tot == NULL)
		return;
	prev->next = tot->next;

	free(tot); 
}
void printList(struct Node* node)
{
	while (node != NULL) {
		printf(" %d ", node->val);
		node = node->next;
	}
}
int main()
{
	struct Node* top = NULL;

	push(&top, 55);
	push(&top, 66);
	push(&top, 77);
	push(&top, 88);

	puts("Created Linked List: ");
	printList(top);
	delet(&top, 66);
	puts("\nLinked List after Deletion of 66: ");
	printList(top);
	return 0;
}
