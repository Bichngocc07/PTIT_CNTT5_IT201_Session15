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
void initQueue(Queue* q) {
    q->front = 0;
    q->rear = 0;
    q->capacity = MAX_CAPACUTY;
}
int isFull(Queue* q) {
    return q->rear == q->capacity - 1;
}
int isFull(Queue* q) {
    if (isFull(q)) {
        printf("Queue is full\n");
    }else {
        q->rear++;
        q->array = (int*)realloc(q->array, q->rear * sizeof(int));
        printf("Da them\n");
    }
}
void displayQueue(Queue* q) {
    printf("Queue is:\n");
    for (int i = q->front; i <= q->rear; i++) {
        if (i == q->front) {
        }
        printf("%d ", q->array[i]);
    }
}
int main() {
    Queue q;
    initQueue(&q);
    for (int i = 1; i <= 10; i++) {
        int number = i;
        printf("Queue is:\n");
        scanf("%d", &number);
        enqueue(&q,num);
        displayQueue(&q);
    }
    int extra;
    printf("Queue is:\n");
    scanf("%d", &extra);
    enqueue(&q,extra);
    displayQueue(&q);
    return 0;
}