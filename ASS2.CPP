
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
struct Stack
{
    int up;
    unsigned cap;
    int* array;
};
struct Stack* createStack( unsigned cap )
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    if (!stack) return NULL;
    stack->up = -1;
    stack->cap = cap;
    stack->array = (int*) malloc(stack->cap * sizeof(int));
    if (!stack->array) return NULL;
    return stack;
}
int Empty(struct Stack* stack)
{
    return stack->up == -1 ;
}
int peek(struct Stack* stack)
{
   return stack->array[stack->up];
}
int pop(struct Stack* stack)
{

    if (Empty(stack))
        return stack->array[stack->up--] ;
    return '$';
}
void push(struct Stack* stack,int op)
{
    stack->array[++stack->up] = op;
}
int Postfix(char* exp)
{
    struct Stack* stack = createStack(strlen(exp));
    int i;
    if (!stack) return -1;
    for (i = 0; exp[i]; ++i)

    {

        if(exp[i]==' ')continue;
        
            else if (isdigit(exp[i]))

        {

            int no=0;
        while(isdigit(exp[i])) 

            {

            no=no*10 + (int)(exp[i]-'0');

                i++;

            }

            i--;

             

     push(stack,no);

        }

else

        {

            int val1 = pop(stack);

            int val2 = pop(stack);

             

            switch (exp[i])

            {

            case '+': push(stack, val2 + val1); break;

            case '-': push(stack, val2 - val1); break;

            case '*': push(stack, val2 * val1); break;

            case '/': push(stack, val2/val1); break;

             

            }

        }

    }

    return pop(stack);
}

int main()
{

    char exp[] = "200 300 + 4 / 7 * 5 +";

    printf ("%d\n", Postfix(exp));

    return 0;
}
 
