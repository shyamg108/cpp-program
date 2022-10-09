
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Stack 
{
	int up;
	unsigned cap;
	int* array;
};
struct Stack* createStack(unsigned cap)
{
	struct Stack* stack
		= (struct Stack*)malloc(
			sizeof(struct Stack));
	stack->cap = cap;
	stack->up = -1;
	stack->array
		= (int*)malloc(
			stack->cap
			* sizeof(int));
	return stack;
}
int Full(struct Stack* stack)
{
	return stack->up
		== stack->cap - 1;
}
int Empty(struct Stack* stack)
{
	return stack->up == -1;
}
void push(struct Stack* stack, int item)
{
if (Full(stack))
		return;
	stack->array[++stack->up] = item;
}
int pop(struct Stack* stack)
{
	if (Empty(stack))
		return -1;
	return stack->array[stack->up--];
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
		printf("%d \n", arr[i]);
}

int main()
{

	int arr[] = { 10,9,8,7 };

	int N = sizeof(arr) / sizeof(arr[0]);
	reverseArray(arr, N);
	return 0;
}