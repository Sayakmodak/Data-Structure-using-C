#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct stack
{
    unsigned size;
    int top;
    int *arr;
};
struct stack *createStack(unsigned size)
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = size;
    s->top = -1;
    s->arr = (int *)malloc(sizeof(int));
    return s;
}
int isEmpty(struct stack *ptr)
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
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
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
    struct stack *s;
    s = createStack(20);
    if (isEmpty(s))
    {
        printf("The stack is empty");
    }
    else
    {
        printf("The stack is not empty");
    }
    return 0;
}