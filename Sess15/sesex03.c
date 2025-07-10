//
// Created by Owner on 7/10/2025.
//
#include <stdio.h>
#include <stdbool.h>

#define MAX_CAPACITY 5

// Cấu trúc hàng đợi
typedef struct {
    int array[MAX_CAPACITY];
    int front;
    int rear;
    int capacity;
} Queue;

// Khởi tạo hàng đợi
void initQueue(Queue *q) {
    q->front = 0;
    q->rear = -1;
    q->capacity = MAX_CAPACITY;
}

// Hàm kiểm tra hàng đợi có trống không
bool isEmpty(Queue *q) {
    return q->rear < q->front;
}

int main() {
    Queue q1, q2;

    // Trường hợp 1: hàng đợi trống
    initQueue(&q1);
    if (isEmpty(&q1))
        printf("true\n");
    else
        printf("false\n");

    // Trường hợp 2: hàng đợi có phần tử
    initQueue(&q2);
    q2.array[++q2.rear] = 1;
    q2.array[++q2.rear] = 2;
    q2.array[++q2.rear] = 5;
    if (isEmpty(&q2))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
