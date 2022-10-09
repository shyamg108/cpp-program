
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Stack 
{
	int top;
	unsigned capacity;
	int* array;
};
struct Stack* createStack(unsigned capacity)
{
	struct Stack* stack
		= (struct Stack*)malloc(
			sizeof(struct Stack));
	stack->capacity = capacity;
	stack->top = -1;
	stack->array
		= (int*)malloc(
			stack->capacity
			* sizeof(int));
	return stack;
}
int isFull(struct Stack* stack)
{
	return stack->top
		== stack->capacity - 1;
}
int isEmpty(struct Stack* stack)
{
	return stack->top == -1;
}
void push(struct Stack* stack, int item)
{
if (isFull(stack))
		return;
	stack->array[++stack->top] = item;
}
int pop(struct Stack* stack)
{
	if (isEmpty(stack))
		return -1;
	return stack->array[stack->top--];
}
void reverseArray(int arr[], int n)
{
	struct Stack* stack = createStack(n);

	for (int i = 0; i < n; i++) {
		push(stack, arr[i]);
	}
	for (int i = 0; i < n; i++) {
		arr[i] = pop(stack);
	}
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

// Driver Code
int main()
{

	int arr[] = { 100, 200, 300, 400 };

	int N = sizeof(arr) / sizeof(arr[0]);
	reverseArray(arr, N);
	return 0;
}