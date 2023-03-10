#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1){
        return 1;
    }
    else{
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

int main(){

    struct stack *S;
    S->size = 80;
    S->top = -1;
    S->arr = (int*)malloc(S->size*sizeof(int));

        // Check if stack is empty
    if(isEmpty(S)){
        
        printf("The stack is empty\n");
        fflush(stdin);
    }
    else{
        printf("The stack is not empty\n");
    }



    return 0;
}