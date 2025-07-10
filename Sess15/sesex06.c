//
// Created by Owner on 7/10/2025.
//
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    int front;
    int rear;
    int capacity;
}Queue;
void initQueue(Queue * q,int capacity) {
    q->front = 0;
    q->rear = -1;
    q->capacity = capacity;
}
void initQueue(Queue *q, int capacity) {
    q->front = 0;
    q->rear = -1;
    q->capacity = capacity;
}

// Thêm phần tử vào hàng đợi
void enqueue(Queue *q, int value) {
    if (q->rear < q->capacity - 1) {
        q->rear++;
        q->array[q->rear] = value;
    } else {
        printf("Queue is full\n");
    }
}

// Hàm kiểm tra tăng đều 1 đơn vị
bool isIncreasingByOne(Queue *q) {
    for (int i = q->front; i < q->rear; i++) {
        if (q->array[i + 1] - q->array[i] != 1)
            return false;
    }
    return true;
}

int main() {
    Queue q;
    int n;
    printf("Nhập số lượng phần tử: ");
    scanf("%d", &n);

    initQueue(&q, n);

    printf("Nhập %d số nguyên dương:\n", n);
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        enqueue(&q, num);
    }

    if (isIncreasingByOne(&q))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}