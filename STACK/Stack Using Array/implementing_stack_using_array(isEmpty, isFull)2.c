#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 
struct Stack
{
    unsigned capacity;
    int top;
    int *array;
};
struct Stack* createStack(unsigned capacity) 
{ 
	struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack)); 
	stack->capacity = capacity; 
	stack->top = -1; 
	stack->array = (int*)malloc(stack->capacity * sizeof(int)); 
	return stack; 
} 
int isEmpty(struct Stack* ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
int isFull(struct Stack* ptr)
{
    if (ptr->top == ptr->capacity - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
int main()
{
    
    struct Stack* stack = createStack(100); 
    
    // Check if stack is empty
    if(isEmpty(stack)){
        printf("The stack is empty");
    }
    else{
        printf("The stack is not empty");
    }
    
    return 0;
}
