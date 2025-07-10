//
// Created by Owner on 7/10/2025.
//
#include <stdio.h>
#include <stdlib.h>
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

// Kiểm tra hàng đợi trống
bool isEmpty(Queue *q) {
    return q->rear < q->front;
}

// Lấy phần tử ra khỏi hàng đợi
int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("queue is empty\n");
        return -1; // giá trị đặc biệt biểu thị không có phần tử
    } else {
        int value = q->array[q->front];
        q->front++;
        return value;
    }
}

// Hiển thị trạng thái hàng đợi
void displayQueue(Queue *q) {
    printf("Queue = { array = [");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d", q->array[i]);
        if (i < q->rear) printf(", ");
    }
    printf("], front = %d, rear = %d, capacity = %d }\n", q->front, q->rear, q->capacity);
}

int main() {
    Queue q;
    initQueue(&q);

    // Ví dụ thêm phần tử
    q.array[++q.rear] = 1;
    q.array[++q.rear] = 2;
    q.array[++q.rear] = 5;

    displayQueue(&q);

    // Thực hiện dequeue
    int removed = dequeue(&q);
    if (removed != -1)
        printf("return value = %d\n", removed);

    displayQueue(&q);

    // Xóa tiếp cho đến khi hàng đợi trống
    while (!isEmpty(&q)) {
        removed = dequeue(&q);
        printf("return value = %d\n", removed);
        displayQueue(&q);
    }

    // Kiểm tra lại khi hàng đợi trống
    dequeue(&q);

    return 0;
}
