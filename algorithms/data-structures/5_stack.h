#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int top;
    void **data;
    int MAX;
    void (*push)(struct Stack*, void*);
    void* (*pop)(struct Stack*);
    void (*display)(struct Stack*);
    void* (*peek)(struct Stack*);
    bool (*isEmpty)(struct Stack*);
};

typedef struct Stack Stack;

Stack* newStack(int);
void init_stack(Stack*, int);

void push(Stack*, void *);
void* pop(Stack*);
void display(Stack*);
void* peek(Stack*);
bool isEmpty(Stack*);

#endif