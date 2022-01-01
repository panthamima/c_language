#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>

struct Queue {
    int head;
    int tail;
    void **data;
    int MAX;
};

typedef struct Queue Queue;

void init_queue(Queue*, int);

void enqueue(Queue*, void *);
void dequeue(Queue*);
void display(Queue*);

#endif