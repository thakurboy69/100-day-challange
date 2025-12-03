//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.


#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int front, rear, size;
    int *arr;
} Deque;


Deque* createDeque(int n) {
    Deque* dq = (Deque*)malloc(sizeof(Deque));
    dq->size = n;
    dq->arr = (int*)malloc(n * sizeof(int));
    dq->front = dq->rear = -1;
    return dq;
}


int isEmpty(Deque* dq) {
    return dq->front == -1;
}


void pushRear(Deque* dq, int x) {
    if (dq->rear == dq->size - 1)
        dq->rear = -1;
    dq->arr[++dq->rear] = x;
    if (dq->front == -1)
        dq->front = 0;
}


void popFront(Deque* dq) {
    if (dq->front == dq->rear)
        dq->front = dq->rear = -1;
    else
        dq->front++;
}


void popRear(Deque* dq) {
    if (dq->front == dq->rear)
        dq->front = dq->rear = -1;
    else if (dq->rear == 0)
        dq->rear = dq->size - 1;
    else
        dq->rear--;
}


int front(Deque* dq) {
    return dq->arr[dq->front];
}
int rear(Deque* dq) {
    return dq->arr[dq->rear];
}


void printKMax(int arr[], int n, int k) {
    Deque* dq = createDeque(n);
    int i;

    
    for (i = 0; i < k; ++i) {
        while (!isEmpty(dq) && arr[i] >= arr[rear(dq)])
            popRear(dq);
        pushRear(dq, i);
    }

    
    for (; i < n; ++i) {
        printf("%d ", arr[front(dq)]);

        
        while (!isEmpty(dq) && front(dq) <= i - k)
            popFront(dq);

        
        while (!isEmpty(dq) && arr[i] >= arr[rear(dq)])
            popRear(dq);

        pushRear(dq, i);
    }

    
    printf("%d\n", arr[front(dq)]);

    free(dq->arr);
    free(dq);
}

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size (k): ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid window size.\n");
        return 0;
    }

    printf("Maximums of each subarray of size %d:\n", k);
    printKMax(arr, n, k);

    return 0;
}