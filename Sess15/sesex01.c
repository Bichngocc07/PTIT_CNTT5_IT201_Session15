//
// Created by Owner on 7/10/2025.
//
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int *array;
    int front;
    int rear;
    int capacity;
}Queue;
Queue* createQueue(int capacity) {
    Queue q;
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    q.array = (int*)malloc(sizeof(int) * capacity);
    q.front = 0;
    q.rear = 0;
    q.capacity = capacity;
    return queue;
}