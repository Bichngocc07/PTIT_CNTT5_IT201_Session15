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

// Hàm khởi tạo hàng đợi
void initQueue(Queue *q) {
    q->front = 0;
    q->rear = -1;
    q->capacity = MAX_CAPACITY;
}

// Kiểm tra hàng đợi trống
bool isEmpty(Queue *q) {
    return q->rear < q->front;
}

// Hàm xem toàn bộ phần tử trong hàng đợi
void viewQueue(Queue *q) {
    if (isEmpty(q)) {
        printf("queue is empty\n");
    } else {
        for (int i = q->front; i <= q->rear; i++) {
            printf("%d\n", q->array[i]);
        }
    }
}

// Ví dụ sử dụng
int main() {
    Queue q;
    initQueue(&q);

    // Trường hợp hàng đợi trống
    viewQueue(&q);

    // Thêm phần tử vào hàng đợi
    q.array[++q.rear] = 1;
    q.array[++q.rear] = 2;
    q.array[++q.rear] = 5;

    // Hiển thị lại sau khi thêm
    viewQueue(&q);

    return 0;
}
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

// Hàm khởi tạo hàng đợi
void initQueue(Queue *q) {
    q->front = 0;
    q->rear = -1;
    q->capacity = MAX_CAPACITY;
}

// Kiểm tra hàng đợi trống
bool isEmpty(Queue *q) {
    return q->rear < q->front;
}

// Hàm xem toàn bộ phần tử trong hàng đợi
void viewQueue(Queue *q) {
    if (isEmpty(q)) {
        printf("queue is empty\n");
    } else {
        for (int i = q->front; i <= q->rear; i++) {
            printf("%d\n", q->array[i]);
        }
    }
}

// Ví dụ sử dụng
int main() {
    Queue q;
    initQueue(&q);

    // Trường hợp hàng đợi trống
    viewQueue(&q);

    // Thêm phần tử vào hàng đợi
    q.array[++q.rear] = 1;
    q.array[++q.rear] = 2;
    q.array[++q.rear] = 5;

    // Hiển thị lại sau khi thêm
    viewQueue(&q);

    return 0;
}
