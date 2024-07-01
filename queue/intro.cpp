#include <iostream>
#include <climits>
using namespace std;

class Queue {
private:
    int front, rear, size;
    unsigned capacity;
    int* array;
public:
    Queue(unsigned capacity);
    ~Queue();
    bool isFull();
    bool isEmpty();
    void enqueue(int data);
    int dequeue();
    int frontItem();
    int rearItem();
    void displayQueue();
};

Queue::Queue(unsigned capacity) {
    this->capacity = capacity;
    front = size = 0;
    rear = capacity - 1;
    array = new int[capacity];
}

Queue::~Queue() {
    delete[] array;
}

bool Queue::isFull() {
    return (size == capacity);
}

bool Queue::isEmpty() {
    return (size == 0);
}

void Queue::enqueue(int data) {
    if (isFull()) {
        cout << "Queue is already full!" << endl;
        return;
    }
    rear = (rear + 1) % capacity;
    array[rear] = data;
    size = size + 1;
    cout << data << " enqueued in the queue" << endl;
}

int Queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty! Cannot dequeue." << endl;
        return INT_MIN;
    }
    int item = array[front];
    front = (front + 1) % capacity;
    size = size - 1;
    return item;
}

int Queue::frontItem() {
    if (isEmpty()) {
        return INT_MIN;
    }
    return array[front];
}

int Queue::rearItem() {
    if (isEmpty()) {
        return INT_MIN;
    }
    return array[rear];
}

void Queue::displayQueue() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue elements are: ";
    for (int i = 0; i < size; i++) {
        cout << array[(front + i) % capacity] << " ";
    }
    cout << endl;
}

int main() {
    Queue q(5);
    q.enqueue(12);
    q.enqueue(2);
    q.enqueue(10);
    q.enqueue(40);
    q.enqueue(50);

    q.displayQueue();

    cout << q.dequeue() << " dequeued from queue" << endl;
    cout << q.dequeue() << " dequeued from queue" << endl;

    q.displayQueue();

    return 0;
}
